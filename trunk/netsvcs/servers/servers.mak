# Microsoft Developer Studio Generated NMAKE File, Format Version 4.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Console Application" 0x0103

!IF "$(CFG)" == ""
CFG=servers - Win32 Debug
!MESSAGE No configuration specified.  Defaulting to servers - Win32 Debug.
!ENDIF 

!IF "$(CFG)" != "servers - Win32 Release" && "$(CFG)" !=\
 "servers - Win32 Debug"
!MESSAGE Invalid configuration "$(CFG)" specified.
!MESSAGE You can specify a configuration when running NMAKE on this makefile
!MESSAGE by defining the macro CFG on the command line.  For example:
!MESSAGE 
!MESSAGE NMAKE /f "servers.mak" CFG="servers - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "servers - Win32 Release" (based on "Win32 (x86) Console Application")
!MESSAGE "servers - Win32 Debug" (based on "Win32 (x86) Console Application")
!MESSAGE 
!ERROR An invalid configuration is specified.
!ENDIF 

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE 
NULL=nul
!ENDIF 
################################################################################
# Begin Project
# PROP Target_Last_Scanned "servers - Win32 Debug"
RSC=rc.exe
CPP=cl.exe

!IF  "$(CFG)" == "servers - Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Target_Dir ""
OUTDIR=.\Release
INTDIR=.\Release

ALL : "$(OUTDIR)\servers.exe"

CLEAN : 
	-@erase ".\Release\servers.exe"
	-@erase ".\Release\main.obj"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

# ADD BASE CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_CONSOLE" /YX /c
# ADD CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_CONSOLE" /YX /c
CPP_PROJ=/nologo /ML /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_CONSOLE"\
 /Fp"$(INTDIR)/servers.pch" /YX /Fo"$(INTDIR)/" /c 
CPP_OBJS=.\Release/
CPP_SBRS=
# ADD BASE RSC /l 0x409 /d "NDEBUG"
# ADD RSC /l 0x409 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
BSC32_FLAGS=/nologo /o"$(OUTDIR)/servers.bsc" 
BSC32_SBRS=
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib /nologo /subsystem:console /machine:I386
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib /nologo /subsystem:console /machine:I386
LINK32_FLAGS=kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib\
 advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib /nologo\
 /subsystem:console /incremental:no /pdb:"$(OUTDIR)/servers.pdb" /machine:I386\
 /out:"$(OUTDIR)/servers.exe" 
LINK32_OBJS= \
	"$(INTDIR)/main.obj"

"$(OUTDIR)\servers.exe" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
    $(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<

!ELSEIF  "$(CFG)" == "servers - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir ""
# PROP Intermediate_Dir "debug"
# PROP Target_Dir ""
OUTDIR=.
INTDIR=.\debug

ALL : "$(OUTDIR)\main.exe"

CLEAN : 
	-@erase ".\debug\vc40.pdb"
	-@erase ".\debug\vc40.idb"
	-@erase ".\main.exe"
	-@erase ".\debug\main.obj"
	-@erase ".\main.ilk"
	-@erase ".\main.pdb"

"$(INTDIR)" :
    if not exist "$(INTDIR)/$(NULL)" mkdir "$(INTDIR)"

# ADD BASE CPP /nologo /W3 /Gm /GX /Zi /Od /D "WIN32" /D "_DEBUG" /D "_CONSOLE" /YX /c
# ADD CPP /nologo /MDd /W3 /Gm /GX /Zi /Od /I "..\lib" /D "WIN32" /D "_DEBUG" /D "_CONSOLE" /YX /c
CPP_PROJ=/nologo /MDd /W3 /Gm /GX /Zi /Od /I "..\lib" /D "WIN32" /D "_DEBUG" /D\
 "_CONSOLE" /Fp"$(INTDIR)/servers.pch" /YX /Fo"$(INTDIR)/" /Fd"$(INTDIR)/" /c 
CPP_OBJS=.\debug/
CPP_SBRS=
# ADD BASE RSC /l 0x409 /d "_DEBUG"
# ADD RSC /l 0x409 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
BSC32_FLAGS=/nologo /o"$(OUTDIR)/servers.bsc" 
BSC32_SBRS=
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib /nologo /subsystem:console /debug /machine:I386
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib ace.lib netsvcs.lib /nologo /subsystem:console /debug /machine:I386 /out:"main.exe"
LINK32_FLAGS=kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib\
 advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib ace.lib netsvcs.lib\
 /nologo /subsystem:console /incremental:yes /pdb:"$(OUTDIR)/main.pdb" /debug\
 /machine:I386 /out:"$(OUTDIR)/main.exe" 
LINK32_OBJS= \
	"$(INTDIR)/main.obj"

"$(OUTDIR)\main.exe" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
    $(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<

!ENDIF 

.c{$(CPP_OBJS)}.obj:
   $(CPP) $(CPP_PROJ) $<  

.cpp{$(CPP_OBJS)}.obj:
   $(CPP) $(CPP_PROJ) $<  

.cxx{$(CPP_OBJS)}.obj:
   $(CPP) $(CPP_PROJ) $<  

.c{$(CPP_SBRS)}.sbr:
   $(CPP) $(CPP_PROJ) $<  

.cpp{$(CPP_SBRS)}.sbr:
   $(CPP) $(CPP_PROJ) $<  

.cxx{$(CPP_SBRS)}.sbr:
   $(CPP) $(CPP_PROJ) $<  

################################################################################
# Begin Target

# Name "servers - Win32 Release"
# Name "servers - Win32 Debug"

!IF  "$(CFG)" == "servers - Win32 Release"

!ELSEIF  "$(CFG)" == "servers - Win32 Debug"

!ENDIF 

################################################################################
# Begin Source File

SOURCE=.\main.cpp

!IF  "$(CFG)" == "servers - Win32 Release"

DEP_CPP_MAIN_=\
	{$(INCLUDE)}"\ace\Service_Config.h"\
	{$(INCLUDE)}"\ace\Service_Object.h"\
	{$(INCLUDE)}"\ace\Thread_Manager.h"\
	{$(INCLUDE)}"\ace\Set.h"\
	{$(INCLUDE)}"\ace\Proactor.h"\
	{$(INCLUDE)}"\ace\ReactorEx.h"\
	{$(INCLUDE)}"\ace\Service_Config.i"\
	{$(INCLUDE)}"\ace\Reactor.h"\
	{$(INCLUDE)}"\ace\Svc_Conf_Tokens.h"\
	{$(INCLUDE)}"\ace\Shared_Object.h"\
	{$(INCLUDE)}"\ace\Event_Handler.h"\
	{$(INCLUDE)}"\ace\Log_Msg.h"\
	{$(INCLUDE)}"\ace\Service_Object.i"\
	{$(INCLUDE)}"\ace\ACE.h"\
	{$(INCLUDE)}"\ace\Shared_Object.i"\
	{$(INCLUDE)}"\ace\OS.h"\
	{$(INCLUDE)}"\ace\ACE.i"\
	{$(INCLUDE)}"\ace\Time_Value.h"\
	{$(INCLUDE)}"\sys\TYPES.H"\
	{$(INCLUDE)}"\sys\STAT.H"\
	{$(INCLUDE)}"\sys\TIMEB.H"\
	{$(INCLUDE)}"\ace\msg_hack.h"\
	{$(INCLUDE)}"\ace\Trace.h"\
	{$(INCLUDE)}"\ace\OS.i"\
	{$(INCLUDE)}"\ace\config.h"\
	{$(INCLUDE)}"\ace\Time_Value.i"\
	{$(INCLUDE)}"\ace\Event_Handler.i"\
	{$(INCLUDE)}"\ace\Log_Record.h"\
	{$(INCLUDE)}"\ace\Log_Priority.h"\
	{$(INCLUDE)}"\ace\Log_Record.i"\
	{$(INCLUDE)}"\ace\Thread.h"\
	{$(INCLUDE)}"\ace\Synch.h"\
	{$(INCLUDE)}"\ace\Thread_Manager.i"\
	{$(INCLUDE)}"\ace\Thread.i"\
	{$(INCLUDE)}"\ace\SV_Semaphore_Complex.h"\
	{$(INCLUDE)}"\ace\Synch.i"\
	{$(INCLUDE)}"\ace\Synch_T.h"\
	{$(INCLUDE)}"\ace\SV_Semaphore_Simple.h"\
	{$(INCLUDE)}"\ace\SV_Semaphore_Complex.i"\
	{$(INCLUDE)}"\ace\SV_Semaphore_Simple.i"\
	{$(INCLUDE)}"\ace\Synch_T.i"\
	{$(INCLUDE)}"\ace\Synch_T.cpp"\
	{$(INCLUDE)}"\ace\Set.i"\
	{$(INCLUDE)}"\ace\Set.cpp"\
	{$(INCLUDE)}"\ace\Message_Block.h"\
	{$(INCLUDE)}"\ace\Timer_Queue.h"\
	{$(INCLUDE)}"\ace\Proactor.i"\
	{$(INCLUDE)}"\ace\Malloc.h"\
	{$(INCLUDE)}"\ace\Message_Block.i"\
	{$(INCLUDE)}"\ace\Malloc.i"\
	{$(INCLUDE)}"\ace\Malloc_T.h"\
	{$(INCLUDE)}"\ace\Memory_Pool.h"\
	{$(INCLUDE)}"\ace\Malloc_T.i"\
	{$(INCLUDE)}"\ace\Malloc_T.cpp"\
	{$(INCLUDE)}"\ace\Signal.h"\
	{$(INCLUDE)}"\ace\Mem_Map.h"\
	{$(INCLUDE)}"\ace\Memory_Pool.i"\
	{$(INCLUDE)}"\ace\Signal.i"\
	{$(INCLUDE)}"\ace\Mem_Map.i"\
	{$(INCLUDE)}"\ace\Timer_Queue.i"\
	{$(INCLUDE)}"\ace\Token.h"\
	{$(INCLUDE)}"\ace\Local_Tokens.h"\
	{$(INCLUDE)}"\ace\ReactorEx.i"\
	{$(INCLUDE)}"\ace\Token.i"\
	{$(INCLUDE)}"\ace\Stack.h"\
	{$(INCLUDE)}"\ace\Synch_Options.h"\
	{$(INCLUDE)}"\ace\Map_Manager.h"\
	{$(INCLUDE)}"\ace\Local_Tokens.i"\
	{$(INCLUDE)}"\ace\Stack.i"\
	{$(INCLUDE)}"\ace\Stack.cpp"\
	{$(INCLUDE)}"\ace\Map_Manager.i"\
	{$(INCLUDE)}"\ace\Map_Manager.cpp"\
	{$(INCLUDE)}"\ace\Handle_Set.h"\
	{$(INCLUDE)}"\ace\Pipe.h"\
	{$(INCLUDE)}"\ace\SOCK_Stream.h"\
	{$(INCLUDE)}"\ace\Reactor.i"\
	{$(INCLUDE)}"\ace\Handle_Set.i"\
	{$(INCLUDE)}"\ace\Pipe.i"\
	{$(INCLUDE)}"\ace\SOCK_IO.h"\
	{$(INCLUDE)}"\ace\INET_Addr.h"\
	{$(INCLUDE)}"\ace\SOCK_Stream.i"\
	{$(INCLUDE)}"\ace\SOCK.h"\
	{$(INCLUDE)}"\ace\SOCK_IO.i"\
	{$(INCLUDE)}"\ace\Addr.h"\
	{$(INCLUDE)}"\ace\IPC_SAP.h"\
	{$(INCLUDE)}"\ace\SOCK.i"\
	{$(INCLUDE)}"\ace\Addr.i"\
	{$(INCLUDE)}"\ace\IPC_SAP.i"\
	{$(INCLUDE)}"\ace\INET_Addr.i"\
	
NODEP_CPP_MAIN_=\
	".\TS_Clerk_Handler.h"\
	".\TS_Server_Handler.h"\
	".\Client_Logging_Handler.h"\
	".\Name_Handler.h"\
	".\Token_Handler.h"\
	".\Server_Logging_Handler.h"\
	".\Logger.h"\
	".\..\..\ace\ace\Sync_T.h"\
	

"$(INTDIR)\main.obj" : $(SOURCE) $(DEP_CPP_MAIN_) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "servers - Win32 Debug"

DEP_CPP_MAIN_=\
	{$(INCLUDE)}"\ace\Service_Config.h"\
	".\..\lib\TS_Clerk_Handler.h"\
	".\..\lib\TS_Server_Handler.h"\
	".\..\lib\Client_Logging_Handler.h"\
	".\..\lib\Name_Handler.h"\
	".\..\lib\Token_Handler.h"\
	".\..\lib\Server_Logging_Handler.h"\
	".\..\lib\Logger.h"\
	{$(INCLUDE)}"\ace\Service_Object.h"\
	{$(INCLUDE)}"\ace\Thread_Manager.h"\
	{$(INCLUDE)}"\ace\Set.h"\
	{$(INCLUDE)}"\ace\Proactor.h"\
	{$(INCLUDE)}"\ace\ReactorEx.h"\
	{$(INCLUDE)}"\ace\Service_Config.i"\
	{$(INCLUDE)}"\ace\Reactor.h"\
	{$(INCLUDE)}"\ace\Svc_Conf_Tokens.h"\
	{$(INCLUDE)}"\ace\Shared_Object.h"\
	{$(INCLUDE)}"\ace\Event_Handler.h"\
	{$(INCLUDE)}"\ace\Log_Msg.h"\
	{$(INCLUDE)}"\ace\Service_Object.i"\
	{$(INCLUDE)}"\ace\ACE.h"\
	{$(INCLUDE)}"\ace\Shared_Object.i"\
	{$(INCLUDE)}"\ace\OS.h"\
	{$(INCLUDE)}"\ace\ACE.i"\
	{$(INCLUDE)}"\ace\Time_Value.h"\
	{$(INCLUDE)}"\sys\TYPES.H"\
	{$(INCLUDE)}"\sys\STAT.H"\
	{$(INCLUDE)}"\sys\TIMEB.H"\
	{$(INCLUDE)}"\ace\msg_hack.h"\
	{$(INCLUDE)}"\ace\Trace.h"\
	{$(INCLUDE)}"\ace\OS.i"\
	{$(INCLUDE)}"\ace\config.h"\
	{$(INCLUDE)}"\ace\Time_Value.i"\
	{$(INCLUDE)}"\ace\Event_Handler.i"\
	{$(INCLUDE)}"\ace\Log_Record.h"\
	{$(INCLUDE)}"\ace\Log_Priority.h"\
	{$(INCLUDE)}"\ace\Log_Record.i"\
	{$(INCLUDE)}"\ace\Thread.h"\
	{$(INCLUDE)}"\ace\Synch.h"\
	{$(INCLUDE)}"\ace\Thread_Manager.i"\
	{$(INCLUDE)}"\ace\Thread.i"\
	{$(INCLUDE)}"\ace\SV_Semaphore_Complex.h"\
	{$(INCLUDE)}"\ace\Synch.i"\
	{$(INCLUDE)}"\ace\Synch_T.h"\
	{$(INCLUDE)}"\ace\SV_Semaphore_Simple.h"\
	{$(INCLUDE)}"\ace\SV_Semaphore_Complex.i"\
	{$(INCLUDE)}"\ace\SV_Semaphore_Simple.i"\
	{$(INCLUDE)}"\ace\Synch_T.i"\
	{$(INCLUDE)}"\ace\Synch_T.cpp"\
	{$(INCLUDE)}"\ace\Set.i"\
	{$(INCLUDE)}"\ace\Set.cpp"\
	{$(INCLUDE)}"\ace\Message_Block.h"\
	{$(INCLUDE)}"\ace\Timer_Queue.h"\
	{$(INCLUDE)}"\ace\Proactor.i"\
	{$(INCLUDE)}"\ace\Malloc.h"\
	{$(INCLUDE)}"\ace\Message_Block.i"\
	{$(INCLUDE)}"\ace\Malloc.i"\
	{$(INCLUDE)}"\ace\Malloc_T.h"\
	{$(INCLUDE)}"\ace\Memory_Pool.h"\
	{$(INCLUDE)}"\ace\Malloc_T.i"\
	{$(INCLUDE)}"\ace\Malloc_T.cpp"\
	{$(INCLUDE)}"\ace\Signal.h"\
	{$(INCLUDE)}"\ace\Mem_Map.h"\
	{$(INCLUDE)}"\ace\Memory_Pool.i"\
	{$(INCLUDE)}"\ace\Signal.i"\
	{$(INCLUDE)}"\ace\Mem_Map.i"\
	{$(INCLUDE)}"\ace\Timer_Queue.i"\
	{$(INCLUDE)}"\ace\Token.h"\
	{$(INCLUDE)}"\ace\Local_Tokens.h"\
	{$(INCLUDE)}"\ace\ReactorEx.i"\
	{$(INCLUDE)}"\ace\Token.i"\
	{$(INCLUDE)}"\ace\Stack.h"\
	{$(INCLUDE)}"\ace\Synch_Options.h"\
	{$(INCLUDE)}"\ace\Map_Manager.h"\
	{$(INCLUDE)}"\ace\Local_Tokens.i"\
	{$(INCLUDE)}"\ace\Stack.i"\
	{$(INCLUDE)}"\ace\Stack.cpp"\
	{$(INCLUDE)}"\ace\Map_Manager.i"\
	{$(INCLUDE)}"\ace\Map_Manager.cpp"\
	{$(INCLUDE)}"\ace\Handle_Set.h"\
	{$(INCLUDE)}"\ace\Pipe.h"\
	{$(INCLUDE)}"\ace\SOCK_Stream.h"\
	{$(INCLUDE)}"\ace\Reactor.i"\
	{$(INCLUDE)}"\ace\Handle_Set.i"\
	{$(INCLUDE)}"\ace\Pipe.i"\
	{$(INCLUDE)}"\ace\SOCK_IO.h"\
	{$(INCLUDE)}"\ace\INET_Addr.h"\
	{$(INCLUDE)}"\ace\SOCK_Stream.i"\
	{$(INCLUDE)}"\ace\SOCK.h"\
	{$(INCLUDE)}"\ace\SOCK_IO.i"\
	{$(INCLUDE)}"\ace\Addr.h"\
	{$(INCLUDE)}"\ace\IPC_SAP.h"\
	{$(INCLUDE)}"\ace\SOCK.i"\
	{$(INCLUDE)}"\ace\Addr.i"\
	{$(INCLUDE)}"\ace\IPC_SAP.i"\
	{$(INCLUDE)}"\ace\INET_Addr.i"\
	
NODEP_CPP_MAIN_=\
	".\..\..\ace\ace\Sync_T.h"\
	

"$(INTDIR)\main.obj" : $(SOURCE) $(DEP_CPP_MAIN_) "$(INTDIR)"


!ENDIF 

# End Source File
# End Target
# End Project
################################################################################
