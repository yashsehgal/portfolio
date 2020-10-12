#include "details.h"
#include "src/error/MessageLogger.h"
#include <string>
#include <map>
using namespace std;

Details::Details() {
  username = "yashsehgal";
  fullname = "Yash Sehgal";
  githubUsername = "@yashsehgal";
  githubProfileLink = "https://www.github.com/yashsehgal";
  linkedinUsername = "Yash Sehgal";
  linkedinProfileLink = "https://www.linkedin.com/in/yash-sehgal-55b7711a4/";
  youtubeChannelName = "Yash Sehgal";
  youtubeChannelLink = "https://www.youtube.com/channel/UC23yA3SBkV_ehY4H8VSuNVg?";
  instagarmUsername = "@yash_sl24";
  instagramProfileLink = "https://www.instagram.com/yash_sl24";
  behanceUsername = "@yashsehgal";
  behanceProfileLink = "https://www.behance.com/yashsehgaleee3";
  facebookUsername = "Yash Sehgal";
  facebookProfileLink = "https://www.facebook.com/yash.sehgal.96780";
  twitterUsername = "Yash Sehgal";
  twitterProfileLink = "https://twitter.com/YashSeh90869786";
  redditUsername = "@sehgalyash";
  redditProfileLink = "https://www.reddit.com/user/sehgalyash";
  userPhoneNumber = "9826544591";
  userPhoneISDCode = "+91";
  userLocation = "Indore, Madhya Pradesh, Indore";
}

const char * Details::getUsername() {
  return (const char *)this->username;
}

const char * Details::getFullname() {
  return (const char *)this->fullname;
}

const char * Details::getGithubUsername() {
  return (const char *)this->githubUsername;
}

const char * Details::getGithubProfileLink() {
  return (const char *)this->githubProfileLink;
}

const char * Details::getLinkedinUsername() {
  return (const char *)this->linkedinUsername;
}

const char * Details::getLinkedinProfileLink() {
  return (const char *)this->linkedinProfileLink;
}

const char * Details::getYoutubeChannelName() {
  return (const char *)this->youtubeChannelName;
}

const char * Details::getYoutubeChannelLink() {
  return (const char *)this->youtubeChannelLink;
}

const char * Details::getInstagarmUsername() {
  return (const char *)this->instagarmUsername;
}

const char * Details::getInstagarmProfileLink() {
  return (const char *)this->instagramProfileLink;
}

const char * Details::getBehanceUsername() {
  return (const char *)this->behanceUsername;
}

const char * Details::getBehanceProfileLink() {
  return (const char *)this->behanceProfileLink;
}

const char * Details::getFacebookUsername() {
  return (const char *)this->facebookUsername;
}

const char * Details::getFacebookProfileLink() {
  return (const char *)this->facebookProfileLink;
}

const char * Details::getTwitterUsername() {
  return (const char *)this->twitterUsername;
}

const char * Details::getTwitterProfileLink() {
  return (const char *)this->twitterProfileLink;
}

const char * Details::getRedditUsername() {
  return (const char *)this->redditUsername;
}

const char * Details::getRedditProfileLink() {
  return (const char *)this->redditProfileLink;
}

const char * Details::getUserPhoneNumber() {
  return (const char *)this->userPhoneNumber;
}

const char * Details::getUserPhoneISDCode() {
  return (const char *)this->userPhoneISDCode;
}

const char * Details::getUserLocation() {
  return (const char *)this->userLocation;
}

typedef const char **commandList = {(const char *) "\n", (const char *) "username: ", (const char *) this->username,
(const char *) "\n", (const char *) "fullname: ", (const char *) this->fullname,
(const char *) "\n", (const char *) "githubUsername: ",
(const char *) this->githubUsername, (const char *) "\n",
(const char *) "githubProfileLink: ", (const char *) this->githubProfileLink,
(const char *) "\n", (const char *) "linkedinUsername: ",
(const char *) this->linkedinUsername, (const char *) "\n",
(const char *) "linkedinProfileLink: ", (const char *) this->linkedinProfileLink,
(const char *) "\n", (const char *) "youtubeChannelName: ",
(const char *) this->youtubeChannelName, (const char *) "\n",
(const char *) "youtubeChannelLink: ", (const char *) this->youtubeChannelLink,
(const char *) "\n", (const char *) "instagramUsername: ",
(const char *) this->instagarmUsername, (const char *) "\n",
(const char *) "instagramProfileLink: ", (const char *) this->instagramProfileLink,
(const char *) "\n", (const char *) "behanceUsername: ",
(const char *) this->behanceUsername, (const char *) "\n",
(const char *) "behanceProfileLink: ", (const char *) this->behanceProfileLink,
(const char *) "\n", (const char *) "facebookUsername: ",
(const char *) this->facebookUsername, (const char *) "\n",
(const char *) "facebookProfileLink: ", (const char *) this->facebookProfileLink,
(const char *) "\n", (const char *) "twitterUsername: ",
(const char *) this->twitterUsername, (const char *) "\n",
(const char *) "twitterProfileLink: ", (const char *) this->twitterProfileLink,
(const char *) "\n", (const char *) "redditUsername: ",
(const char *) this->redditUsername, (const char *) "\n",
(const char *) "redditProfileLink: ", (const char *) this->redditProfileLink,
(const char *) "\n", (const char *) "userPhoneNumber: ",
(const char *) this->userPhoneNumber, (const char *) "\n",
(const char *) "userPhoneISDCode: ", (const char *) this->userPhoneISDCode,
(const char *) "\n", (const char *) "userLocation: ",
(const char *) this->userLocation};


std::map<char *, const char *> commandList = {
  {"username", this->username},
  {"fullname", this->fullname},
  {"github-username", this->githubUsername},
  {"github-profile-link", this->githubProfileLink},
  {"linkedin-username", this->linkedinUsername},
  {"linkedin-profile-link", this->linkedProfileLink},
  {"youtube-channel-name", this->youtubeChannelName},
  {"youtube-channel-link", this->youtubeChannelLink},
  {"instagram-username", this->instagramUsername},
  {"instagram-profile-link", this->instagramProfileLink},
  {"behance-username", this->behanceUsername},
  {"behance-profile-link", this->behanceProfileLink},
  {"facebook-username", this->facebookUsername},
  {"facebook-profile-link", this->facebookProfileLink},
  {"twitter-username", this->twitterUsername},
  {"twitter-profile-link", this->twitterSocialLink},
  {"reddit-username", this->redditUsername},
  {"reddit-profile-link", this->redditProfileLink},
  {"userPhoneNumber", this->userPhoneLink},
  {"userPhoneISDCode", this->userPhoneISDCode},
  {"userLocation", this->userLocation}
};

const char * Details::getDetails() {

  // ! Write unit tests for this feature
  // ? Also, write module and final features test for this method in the test package of this file

  // TODO: Tests for this feature are remaining, after checking all the vulnerabilities activate this feature in the merge request.
    commandList commandList;
  const char *command = (const char *)(connectStringData(commandList));

  /// command contains all the string data related to the user
  /// command is using dictionary data structure using string manipulation methods
  return (const char *)command;
}

const char ** Details::connectStringData(const char ** commandList) {
  int length = 0;
  while(commandList[length] != nullptr) {
    ++length;       /// incrementing the length
  } 
  for(unsigned int count = 0; count < length; count++) {
    const char * commandSource = (const char *)commandList[count];
    strcat((char *)commandList[count + 1] , (const char *)commandSource);
    count++;
  }
}

Details::~Details() {
  MessageLogger messageLogger(portAccess = true);
  const char * title = "Object Deallocation";
  const char * message = "The object from details feature has been deallocated from the memory, message deployed from the module destructor";
  const char * port_name = "system-callback";
  const char * port_address = "5500";
  messageLogger.setMessageTitle(title);
  messageLogger.setMessageText(message);
  messageLogger.setPortName(port_name);
  messageLogger.setPortAddress(port_address);
}

