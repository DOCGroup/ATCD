/* -*- c++ -*- */
// Hey, Emacs!  This is a C++ file!
// $Id$

// ============================================================================
//
// = LIBRARY
//    jaws
// 
// = FILENAME
//    Parse_Headers.h
//
// = AUTHOR
//    James Hu
// 
// ============================================================================

#if !defined (PARSE_HEADERS_H)
#define PARSE_HEADERS_H

#include "ace/OS.h"

class Headers_Map
  // = TITLE
  //     Map textual headings to header values (e.g. "Subject:" maps to
  //     "Re: My left foot"
{
public:
  Headers_Map (void);
  ~Headers_Map (void);

  class Map_Item
  {
  public:
    Map_Item (void);
    ~Map_Item (void);

    operator const char * (void) const;
    Map_Item &operator= (char *);
    Map_Item &operator= (const char *);
    Map_Item &operator= (const Map_Item &);

    const char *header_;
    const char *value_;

    const char *no_value_;
  };

  Map_Item &operator[] (const char *const header);
  const Map_Item &operator[] (const char *const header) const;

  enum 
  { 
    MAX_HEADERS = 100 
  };

  int mapped (const char *const header) const;

private:
  Map_Item *find (const char *const header) const;
  Map_Item *place (const char *const header);
  static int compare (const void *item1, const void *item2);

private:
  Map_Item map_[MAX_HEADERS];
  Map_Item garbage;

  int num_headers_;
};

class Headers
  // = TITLE
  //     A general mechanism to parse headers of Internet text headers.
  //
  // = DESCRIPTION
  //     Allow interesting headers to be inserted and later associated
  //     with values.  This implementation assumes the parsing of headers
  //     will be done from ACE_Message_Blocks.
{
public:
  Headers (void);
  ~Headers (void);

  void recognize (const char *const header);

  void parse_header_line (char *const header_line);

  int complete_header_line (char *const header_line);
  // -1 -> end of line but not complete header line
  //  0 -> no end of line marker
  //  1 -> complete header line

  int end_of_headers (void) const;

  enum 
  { 
    MAX_HEADER_LINE_LENGTH = 8192 
  };

  Headers_Map::Map_Item &operator[] (const char *const header);
  const Headers_Map::Map_Item &operator[] (const char *const header) const;

private:
  int end_of_line (char *&line, int &offset) const;

private:
  Headers_Map map_;
  int done_;
};

#endif /* PARSE_HEADERS_H */
