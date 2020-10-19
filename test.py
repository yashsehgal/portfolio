
from termcolor import colored
from matplotlib import pyplot as plt

class bcolors:
    HEADER = '\033[95m'
    OKBLUE = '\033[94m'
    OKCYAN = '\033[96m'
    OKGREEN = '\033[92m'
    WARNING = '\033[93m'
    FAIL = '\033[91m'
    ENDC = '\033[0m'
    BOLD = '\033[1m'
    UNDERLINE = '\033[4m'

class Data:
    def __init__(self):
        self.generateData()
    
    def generateData(self):
        # data 01
        self.user_details = {
            "yashsehgal": {
                "username": "@yashsehgal",
                "firstname": "Yash",
                "lastname": "Sehgal",
                "connections": "1.3k",
                "activeStatus": True,
                "verifiedUser": False
            },
            "johndoe": {
                "username": "@johndoe",
                "firstname": "John",
                "lastname": "Doe",
                "connections": "130",
                "activeStatus": False,
                "verifiedUser": True
            }
        }
    
        # data 02
        self.user_profile = {
            "yashsehgal": {
                "activeStatus": True,
                "verifiedUser": False
            },
            "johndoe": {
                "activeStatus": False,
                "verifiedUser":  True
            }
        }
        
    def parseUserData(self, username):
        if self.user_details.__contains__(username):
            return self.user_details.get(username)
        else: return False
        
    def parseUserProfile(self, username):
        if self.user_profile.__contains__(username):
            return self.user_profile.get(username)
        else: return False
    
'''
  class method - This class method contains functions and features which will continuosly check all the parsing methods
                and will run all the logical test cases.
'''
class UnitTest: 
    
    def __init__(self, activation):
        self.activation = activation
        # self.runTestForUserDetailsParser(True)
        # self.runTestForUserProfileParser(True)
    
    def runTestForUserDetailsParser(self, activation = False):
        if activation:
            data = Data()
            print("running true test case...")
            if data.parseUserData("yashsehgal"):
                print("test result> " + str(data.parseUserData("yashsehgal")))
                print("passed: True test case is running correctly...")
            else:
                print("true test case for parsing user data is failed... Production Error")
            
            print("running false test case...")
            if data.parseUserData("personname"):
                print("test result> " + str(data.parseUserData("personname")))
                print("warning: False input test cases are also running successfully, exception raised!")
            else:
                print("passed: False test case is not running, which means parsing is working correctly...")
                
    def runTestForUserProfileParser(self, activation = False):
        if activation:
            data = Data()
            print("running true test case...")
            if data.parseUserProfile("yashsehgal"):
                print("test result> " + str(data.parseUserProfile("yashsehgal")))
                print("passed: True test case is running correctly...")
            else:
                print("true test case for parsing user data is failed... Production Error")
            
            print("running false test case...")
            if data.parseUserProfile("personname"):
                print("test result> " + str(data.parseUserProfile("personname")))
                print("warning: False input test cases are also running successfully, exception raised!")
            else:
                print("passed: False test case is not running, which means parsing is working correctly...")

    
    def runTestForCheckingUserObjectData(self, activation = False):
        if activation:
            data = Data()
            print("running true test case...")
            
            # running test to check the innerObject availability and accessibility - complete object parsing
            if data.parseUserData("yashsehgal"):
                self.userSampleData = data.user_details.get("yashsehgal")
                print("> " + str(self.userSampleData))
            
            # running test to check the innerObject availability and accessibility - parsing username
            if data.parseUserData("yashsehgal"):
                self.sampleDataForUsername = self.userSampleData.get("username")
                print("sample object username> " + str(self.sampleDataForUsername))
            
            # running test to check the innerObject availability and accessibility - parsing firstname, lastname
            if data.parseUserData("yashsehgal"):
                self.sampleDataForFirstName = self.userSampleData.get("firstname")
                self.sampleDataForLastName = self.userSampleData.get("lastname")
                print("Fullname> " + str(self.sampleDataForFirstName) + " " + str(self.sampleDataForLastName))
            
            # running test to check the innerObject availability and accessibility - parsing connections
            if data.parseUserData("yashsehgal"):
                self.sampleDataForConnections = self.userSampleData.get("connections")
                print("connections> " + str(self.sampleDataForConnections))
            
            # running test to check the innerObject availability and accessibility - parsing user profile type and status
            if data.parseUserData("yashsehgal"):
                self.sampleDataForUserActivityStatus = self.userSampleData.get("activeStatus")
                self.sampleDataForUserVerificationStatus = self.userSampleData.get("verifiedUser")
                if not self.sampleDataForUserActivityStatus == None:
                    print("active> " + str(self.sampleDataForUserActivityStatus))
                if not self.sampleDataForUserVerificationStatus == None:
                    # print(successGreen + "verified> " + str(self.sampleDataForUserVerificationStatus) + ENDC)     ! deactivating this code
                    # print(f"{bcolors.WARNING}{str(self.sampleDataForUserVerificationStatus)}{bcolors.ENDC}")
                    print(colored('hello', 'red'), colored('world', 'green'))
                

class DataAnalyser:
  def __init__(self):
    super().__init__()
  
  def analyseVerifiedUser(self):
    data = Data()
    if (data.parseUserData("yashsehgal") is not None) and (data.parseUserData("johndoe") is not None):
      print("users are available in the data object")
      # parsing and putting data operation on 'yashsehgal' object
      self.sampleDataForUser = data.parseUserData("yashsehgal")
      self.verifiedUserCount = 0
      self.unVerifiedUserCount = 0
      for count in range(len(data.parseUserData("yashsehgal"))):
        if (self.sampleDataForUser.keys("verifiedUser") is True):
          self.verifiedUserCount += 1
        elif (self.sampleDataForUser.keys("verifiedUser") is False):
          self.unVerifiedUserCount += 1
        else:
          print("error> user profile object is missfunctioning")
  
  def showDataOnGraph(self):
    plt.bar(self.verifiedUserCount)
    plt.bar(self.unVerifiedUserCount)
    plt.title("Index of Verified and Unverified Users")
    # plt.xlabel("verified")
    plt.legend(["verified", "un-verified"])
    plt.show()
    

def testController():
    unitTest = UnitTest(True)
    unitTest.runTestForUserDetailsParser(True)
    unitTest.runTestForUserProfileParser(True)
    unitTest.runTestForCheckingUserObjectData(True)
  
def analyseData():
  dataAnalyser = DataAnalyser()
  dataAnalyser.analyseVerifiedUser()
  dataAnalyser.showDataOnGraph()

if __name__ == '__main__':
    testController()
    dataTest = Data()
    print(str(dataTest.user_details))
    print(str(dataTest.user_profile))