#ifndef _DETAILS__
#define _DETAILS__

#include <iostream>

class Details {
  private:
    char * username;
    char * fullname;
    char * githubUsername;
    char * githubProfileLink;
    char * linkedinUsername;
    char * linkedinProfileLink;
    char * youtubeChannelName;
    char * youtubeChannelLink;
    char * instagarmUsername;
    char * instagramProfileLink;
    char * behanceUsername;
    char * behanceProfileLink;
    char * facebookUsername;
    char * facebookProfileLink;
    char * twitterUsername;
    char * twitterProfileLink;
    char * redditUsername;
    char * redditProfileLink;
    char * userPhoneNumber;
    char * userPhoneISDCode;
    char * userLocation;
    /// Constructor method
    Details();
    /// Destructor method
    ~Details();
  public:
    const char * getUsername(void);
    const char * getFullname(void);
    const char * getGithubUsername(void);
    const char * getGithubProfileLink(void);
    const char * getLinkedinUsername(void);
    const char * getLinkedinProfileLink(void);
    const char * getYoutubeChannelName(void);
    const char * getYoutubeChannelLink(void);
    const char * getInstagarmUsername(void);
    const char * getInstagarmProfileLink(void);
    const char * getBehanceUsername(void);
    const char * getBehanceProfileLink(void);
    const char * getFacebookUsername(void);
    const char * getFacebookProfileLink(void);
    const char * getTwitterUsername(void);
    const char * getTwitterProfileLink(void);
    const char * getRedditUsername(void);
    const char * getRedditProfileLink(void);
    const char * getUserPhoneNumber(void);
    const char * getUserPhoneISDCode(void);
    const char * getUserLocation(void);
    static const char * getDetails(void);

    /// creating a function method which will connect all the string data values
    static const char ** connectStringData(const char **);
  // protected: this section is currently deactivated. This feature will be activated if any 
  // - - - - -  methods will have to be protected...
};

#endif // _DETAILS__