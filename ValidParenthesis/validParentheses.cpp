#include <iostream>
#include <stack>
#include <string>

class Solution {
 public:
  bool isValid(std::string s) {
    if (s.size() == 1) return false;

    std::stack<char> myStack;

    for (auto c : s) {
      switch (c) {
        case (')'):
          if (myStack.empty() || myStack.top() != '(')
            return false;
          else
            myStack.pop();
          break;

        case ('}'):
          if (myStack.empty() || myStack.top() != '{')
            return false;
          else
            myStack.pop();

          break;

        case (']'):
          if (myStack.empty() || myStack.top() != '[')
            return false;
          else
            myStack.pop();
          break;

        default:
          myStack.push(c);
          break;
      }
    }

    return myStack.empty();
  }
};

int main() {
  Solution mySolution;
  bool answer = mySolution.isValid("){");
  std::cout << answer << std::endl;

  return 0;
}
