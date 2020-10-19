#include <iostream>
#include <conio.h>

class TestCase {
  public:
  void runTextCase(const char * message, const int length) {
    int _length = 0;
    while(message[_length] != '\0') {
      ++_length;
    }

    if (length == (const int)_length) {
      system("color 2");
      std::cout << "passed: length is correct in all the cases" << std::endl;
    } else {
      system("color 4");
      std::cout << "failed: length of the string which is used, is not valid" << std::endl;
    }
  }
};

void tester() {
  TestCase testCase;
  
  /// true test case - test 01
  const char * name = "yashsehgal";
  const int length = 10;

  /// false test case - test 02
  const char * _name_ = "username";
  const int _length_ = 5;
  testCase.runTextCase(name, length);         /// running true test case
  system("pause");
  testCase.runTextCase(_name_, _length_);    /// running false test case
  system("pause");
}

int main() {
  tester();
  return 0;
}
