
/// setting null operation using an instance
const __nothing__ = '\0';

class Logger {
  messageTitle = __nothing__;
  messageTextCommand = __nothing__;
  portAddress = __nothing__;
  portName = __nothing__;
  messageType = __nothing__;
  portAccess = false;       /// by-default there will be no access

  constructor(portAccess = false) {
    portAccess = true;
  };

  setMessageTitle(messageTitle) {
    if (this.portAccess) {
      if (this.messageType === "log") {
        console.log("> " + messageTitle);
      } else if (this.messageType === "warn") {
        console.warn("warning: " + messageTitle);
      } else if (this.messageType === "error") {
        console.error("error: " + messageTitle);
      } else if (this.messageType === "info") {
        console.log("info: " + messageTitle)
      } else {
        console.warn("warning: message type is not specified before being used");
        console.info("deploying same message title with log method");
        console.log("> " + messageTitle);
      }
      /// saving this message into cache logger file
      this.messageTitle = messageTitle;
    }
  }
  
  getMessageTitle() {
    return this.messageTitle;
  };

  setMessageText(messageText) {
    if (this.portAccess) {
      /// code here...
    }
  }
};