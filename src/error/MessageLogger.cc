#include "MessageLogger.h"

MessageLogger::MessageLogger() {
  this->messageTitleCommand = nullptr;
  this->messageTextCommand = nullptr;
  this->portAddress = nullptr;
  this->portName = nullptr;
  this->portAccess = false;
}

MessageLogger::MessageLogger(bool portAccess = false) {
  this->portAccess = portAccess;
}

void MessageLogger::setMessageTitle(const char * messageTitle) {
  if (this->portAccess) {
    std::cout << "title: " << messageTitle << std::endl;
    this->title = messageTitle;
    this->messageTitleCommand = (char *)((const char *)"title: " + messageTitle);
  }
}

const char * MessageLogger::getMessageTitle() {
  this->portAccess? return this->messageTitleCommand;
}

void MessageLogger::setMessageText(const char * message) {
  if (this->portAccess) {
    std::cout << "message: " << message << std::endl;
    this->message = message;
    this->messageTextCommand = (char *)((const char *)"message: " + message);
  }
}

const char * MessageLogger::getMessageText() {
  this->portAccess? return this->messageTextCommand;
}

void MessageLogger::setPortAddress(const char * portAddress) {
  this->portAddress = portAddress;
}

const char * MessageLogger::getPortAddress() {
  this->portAccess? return this->portAddress;
}

void MessageLogger::setPortName(const char * portName) {
  this->portName = portName;
}

void MessageLogger::getPortName() {
  this->portAccess? return this->portName;
}

void MessageLogger::updatePort() {
  if ((this->title != nullptr) && this->message != nullptr)) {
    this->portAccess = true;
  } : abortMessageLogger(abortCommand = true);
}

void MessageLogger::abortMessageLogger(bool abortCommand = false) {
  abortCommand? ~MessageLogger() : exit(0);
}
