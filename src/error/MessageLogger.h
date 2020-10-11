#ifndef _ERROR__MESSAGE_LOGGER___
#define _ERROR__MESSAGE_LOGGER___

// #include <iostream>
// #include <string>
// #include <time.h>

class MessageLogger {
private:
  char * messageTitleCommand;
  char * messageTextCommand;
  char * portAddress;
  char * portName;
  bool portAccess;

  /// message data
  char * title;
  char * message;
  MessageLogger();
  MessageLogger(bool);
  ~MessageLogger();
public:
  void setMessageTitle(const char *);
  const char * getMessageTitle();
  void setMessageText(const char *);
  const char * getMessageText();
  void setPortAddress(const char *);
  const char * getPortAddress();
  void setPortName(const char *);
  const char * getPortName();
  void updatePort();
  void abortMessageLogger(bool);
};

#endif // _ERROR__MESSAGE_LOGGER___