// $Id$

#include "Video_Control_State.h"
#include "Video_Server.h"


Video_Control_State::Video_Control_State ()
  : vch_ (VIDEO_CONTROL_HANDLER_INSTANCE::instance ()->get_video_control_handler ())
{
}

Video_Control_State::Video_States
Video_Control_State::get_state (void)
{
  return this->state_;
}

CORBA::Boolean 
Video_Control_State::init_video (const Video_Control::INITvideoPara &para)
{
  return 0;
}


CORBA::Boolean 
Video_Control_State::stat_stream (CORBA::Char_out ch,
                              CORBA::Long_out size)
                              
{
  return 0;
}


CORBA::Boolean 
Video_Control_State::close (void)
{
  return 0;
}


CORBA::Boolean 
Video_Control_State::stat_sent (void)
{
  return 0;
}


CORBA::Boolean 
Video_Control_State::fast_forward (const Video_Control::FFpara &para)
                               
{
  return 0;
}


CORBA::Boolean 
Video_Control_State::fast_backward (const Video_Control::FFpara &para)
                                
{
  return 0;
}


CORBA::Boolean 
Video_Control_State::step (const Video_Control::STEPpara &para)
                       
{
  return 0;
}


CORBA::Boolean 
Video_Control_State::play (const Video_Control::PLAYpara &para,
                       CORBA::Long_out vts)
                       
{
  return 0;
}


CORBA::Boolean 
Video_Control_State::position (const Video_Control::POSITIONpara &para)
                           
{
  return 0;
}


CORBA::Boolean 
Video_Control_State::speed (const Video_Control::SPEEDpara &para)
                        
{
  return 0;
}


CORBA::Boolean 
Video_Control_State::stop (CORBA::Long cmdsn)
                       
{
  return 0;
}

// ----------------------------------------------------------------------

Video_Control_Waiting_State::Video_Control_Waiting_State (void)
{
  //%%
  this->state_ = VIDEO_WAITING;
}

int
Video_Control_Waiting_State::handle_input (ACE_HANDLE h)
{
  int result;
  
  //  fprintf (stderr, "VS: waiting for a new command...\n");
    
  VIDEO_SINGLETON::instance ()->precmd = VIDEO_SINGLETON::instance ()->cmd;
  result = VIDEO_SINGLETON::instance ()->CmdRead((char *)&VIDEO_SINGLETON::instance ()->cmd, 1);
  if (result != 0)
    return -1;
  fprintf(stderr, "VS got VIDEO_SINGLETON::instance ()->cmd %d\n", VIDEO_SINGLETON::instance ()->cmd);
    
  switch (VIDEO_SINGLETON::instance ()->cmd)
    {
    case CmdPOSITION:
    case CmdPOSITIONrelease:
      result = VIDEO_SINGLETON::instance ()->position ();
      if (result != 0)
        return result;
      break;
    case CmdSTEP:
      result = VIDEO_SINGLETON::instance ()->step_video ();
      if (result != 0)
        return result;
      break;
    case CmdFF:
      VIDEO_SINGLETON::instance ()->init_fast_play ();
      this->vch_->change_state (VIDEO_CONTROL_FAST_FORWARD_STATE::instance ());
      break;
    case CmdFB:
      VIDEO_SINGLETON::instance ()->init_fast_play ();
      this->vch_->change_state (VIDEO_CONTROL_FAST_BACKWARD_STATE::instance ());
      break;
    case CmdPLAY:
      //      VIDEO_SINGLETON::instance ()->init_play ();
      this->vch_->change_state (VIDEO_CONTROL_PLAY_STATE::instance ());
      break;
    case CmdCLOSE:
      VIDEO_SINGLETON::instance ()->normalExit = 1;
      TAO_ORB_Core_instance ()->reactor ()->end_event_loop ();
      break;
    case CmdSTATstream:
      VIDEO_SINGLETON::instance ()->stat_stream ();
      break;
    case CmdSTATsent:
      VIDEO_SINGLETON::instance ()->stat_sent ();
      break;
    default:
      ACE_DEBUG ((LM_DEBUG, 
                  "(%P|%t) Video_Server: Unknown command %d",
                  VIDEO_SINGLETON::instance ()->cmd));
      VIDEO_SINGLETON::instance ()->normalExit = 0;
      return -1;
    }
  // one command was handled successfully
  return 0;
}  


CORBA::Boolean 
Video_Control_Waiting_State::init_video (const Video_Control::INITvideoPara &para)
{
  return 0;
}


CORBA::Boolean 
Video_Control_Waiting_State::stat_stream (CORBA::Char_out ch,
                              CORBA::Long_out size)
                              
{
  return 0;
}


CORBA::Boolean 
Video_Control_Waiting_State::close (void)
{
  return 0;
}


CORBA::Boolean 
Video_Control_Waiting_State::stat_sent (void)
{
  ACE_DEBUG ((LM_DEBUG,
              "Video_Control_Waiting_State::stat_sent \n"));
  return 0;
}


CORBA::Boolean 
Video_Control_Waiting_State::fast_forward (const Video_Control::FFpara &para)
                               
{
  return 0;
}


CORBA::Boolean 
Video_Control_Waiting_State::fast_backward (const Video_Control::FFpara &para)
                                
{
  return 0;
}


CORBA::Boolean 
Video_Control_Waiting_State::step (const Video_Control::STEPpara &para)
                       
{
  return 0;
}


CORBA::Boolean 
Video_Control_Waiting_State::play (const Video_Control::PLAYpara &para,
                       CORBA::Long_out vts)
                       
{
  // Many guys in legacy code depend on this variable.
  VIDEO_SINGLETON::instance ()-> cmd =CmdPLAY;
  //ACE_DEBUG ((LM_DEBUG,
  //            "(%P|%t)Video_Control_Waiting_State::play () called \n"));
  VIDEO_SINGLETON::instance ()->init_play (para);
  this->vch_->change_state (VIDEO_CONTROL_PLAY_STATE::instance ());
  return 0;
}


CORBA::Boolean 
Video_Control_Waiting_State::position (const Video_Control::POSITIONpara &para)
                           
{
  return 0;
}


CORBA::Boolean 
Video_Control_Waiting_State::speed (const Video_Control::SPEEDpara &para)
                        
{
  return 0;
}


CORBA::Boolean 
Video_Control_Waiting_State::stop (CORBA::Long cmdsn)
                       
{
  return 0;
}


// Video_Control_Play_State methods

Video_Control_Play_State::Video_Control_Play_State (void)
{
  this->state_ = VIDEO_PLAY;
}

int
Video_Control_Play_State::handle_input (ACE_HANDLE h)
{
  fprintf (stderr,"Video_Control_Play_State::handle_input () \n");

  char tmp;
  int result = VIDEO_SINGLETON::instance ()->CmdRead((char *)&tmp, 1);
  if (result != 0)
    return result;
  
  if (tmp == CmdCLOSE) {
    TAO_ORB_Core_instance ()->reactor ()->end_event_loop ();
    return 0;
  }
  else if (tmp == CmdSTOP) {
    VIDEO_SINGLETON::instance ()->cmd = tmp;
    result = VIDEO_SINGLETON::instance ()->CmdRead((char *)&VIDEO_SINGLETON::instance ()->cmdsn, sizeof(int));
    if (result != 0)
      return result;
#ifdef NeedByteOrderConversion
    VIDEO_SINGLETON::instance ()->cmdsn = ntohl(VIDEO_SINGLETON::instance ()->cmdsn);
#endif
    Video_Timer_Global::StopTimer();
    
    //    VIDEO_SINGLETON::instance ()->state = Video_Global::INVALID;
    // We need to call the read_cmd of the Video_Server to simulate
    // the control going to a switch..
    //  VIDEO_SINGLETON::instance ()->read_cmd ();

    // Change the state of the video control handler to waiting state
    // to read further commands.
    this->vch_->change_state (VIDEO_CONTROL_WAITING_STATE::instance ());
    return 0;
  }
  else if (tmp == CmdSPEED)
    {
      SPEEDpara para;
      /*
        fprintf(stderr, "VS: VIDEO_SINGLETON::Instance ()->CmdSPEED. . .\n");
      */
      result = VIDEO_SINGLETON::instance ()->CmdRead((char *)&para, sizeof(para));
      if (result != 0)
        return result;
#ifdef NeedByteOrderConversion
      para.sn = ntohl(para.sn);
      para.usecPerFrame = ntohl(para.usecPerFrame);
      para.framesPerSecond = ntohl(para.framesPerSecond);
      para.sendPatternGops = ntohl(para.sendPatternGops);
      para.frameRateLimit1000 = ntohl(para.frameRateLimit1000);
#endif
      VIDEO_SINGLETON::instance ()->frameRateLimit = para.frameRateLimit1000 / 1000.0;
      VIDEO_SINGLETON::instance ()->sendPatternGops = para.sendPatternGops;
      VIDEO_SINGLETON::instance ()->currentUPF = para.usecPerFrame;
      VIDEO_SINGLETON::instance ()->addedUPF = 0;
      memcpy(VIDEO_SINGLETON::instance ()->sendPattern, para.sendPattern, PATTERN_SIZE);
      Video_Timer_Global::TimerSpeed ();
    }
  else
    {
      fprintf(stderr, "VS error: VIDEO_SINGLETON::instance ()->cmd=%d while expect STOP/SPEED.\n", tmp);
      VIDEO_SINGLETON::instance ()->normalExit = 0;
      TAO_ORB_Core_instance ()->reactor ()->end_event_loop ();
      return 1;
    }
  VIDEO_SINGLETON::instance ()->play_send ();// simulating the for loop in vs.cpp
  return 0;
}

Video_Control_Fast_Forward_State::Video_Control_Fast_Forward_State (void)
{
  this->state_ = VIDEO_FAST_FORWARD;
}

int
Video_Control_Fast_Forward_State::handle_input (ACE_HANDLE h)
{
  int result = VIDEO_SINGLETON::instance ()->CmdRead((char *)&VIDEO_SINGLETON::instance ()->cmd, 1);
  if (result != 0)
    return result;
  if (VIDEO_SINGLETON::instance ()->cmd == CmdCLOSE) {
    TAO_ORB_Core_instance ()->reactor ()->end_event_loop ();
    return 0;
    //	exit(0);
  }
  else if (VIDEO_SINGLETON::instance ()->cmd != CmdSTOP) {
    fprintf(stderr, "VS error: VIDEO_SINGLETON::instance ()->cmd=%d while STOP is expected.\n", VIDEO_SINGLETON::instance ()->cmd);
    VIDEO_SINGLETON::instance ()->normalExit = 0;
    TAO_ORB_Core_instance ()->reactor ()->end_event_loop ();
    return 1;
    //	exit(1);
  }
  result = VIDEO_SINGLETON::instance ()->CmdRead((char *)&VIDEO_SINGLETON::instance ()->cmdsn, sizeof(int));
  if (result != 0 )
    return result;
#ifdef NeedByteOrderConversion
  VIDEO_SINGLETON::instance ()->cmdsn = ntohl(VIDEO_SINGLETON::instance ()->cmdsn);
#endif
  Video_Timer_Global::StopTimer();
  //  VIDEO_SINGLETON::instance ()->state = Video_Global::INVALID;
  //  VIDEO_SINGLETON::instance ()->read_cmd ();

  //Change the video control handler's state to read further commands
  this->vch_->change_state (VIDEO_CONTROL_WAITING_STATE::instance ());
  return 0;
}

Video_Control_Fast_Backward_State::Video_Control_Fast_Backward_State (void)
{
  this->state_ = VIDEO_FAST_BACKWARD;
}

int
Video_Control_Fast_Backward_State::handle_input (ACE_HANDLE h)
{
  int result = VIDEO_SINGLETON::instance ()->CmdRead((char *)&VIDEO_SINGLETON::instance ()->cmd, 1);
  if (result != 0)
    return result;
  if (VIDEO_SINGLETON::instance ()->cmd == CmdCLOSE) {
    TAO_ORB_Core_instance ()->reactor ()->end_event_loop ();
    return 0;
    //	exit(0);
  }
  else if (VIDEO_SINGLETON::instance ()->cmd != CmdSTOP) {
    fprintf(stderr, "VS error: VIDEO_SINGLETON::instance ()->cmd=%d while STOP is expected.\n", VIDEO_SINGLETON::instance ()->cmd);
    VIDEO_SINGLETON::instance ()->normalExit = 0;
    TAO_ORB_Core_instance ()->reactor ()->end_event_loop ();
    return 1;
    //	exit(1);
  }
  result = VIDEO_SINGLETON::instance ()->CmdRead((char *)&VIDEO_SINGLETON::instance ()->cmdsn, sizeof(int));
  if (result != 0 )
    return result;
#ifdef NeedByteOrderConversion
  VIDEO_SINGLETON::instance ()->cmdsn = ntohl(VIDEO_SINGLETON::instance ()->cmdsn);
#endif
  Video_Timer_Global::StopTimer();
  //  VIDEO_SINGLETON::instance ()->state = Video_Global::INVALID;
  //  VIDEO_SINGLETON::instance ()->read_cmd ();

  //Change the video control handler's state to read further commands
  this->vch_->change_state (VIDEO_CONTROL_WAITING_STATE::instance ());

  return 0;
}
