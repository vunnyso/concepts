#include <gtest/gtest.h>
#include <iostream>
#include <stack>
#include <string>

using namespace std;

class Solution {
public:
  bool isValid(string s) {
    stack<char> st;
    for (char ch : s) {
      if (ch == '(' || ch == '{' || ch == '[') {
        st.push(ch);
      } else {
        if (st.empty() || (st.top() != '(' && ch == ')') ||
            (st.top() != '{' && ch == '}') || (st.top() != '[' && ch == ']')) {
          return false;
        } else {
          st.pop();
        }
      }
    }
    return st.empty();
  }
};

// Google Test cases
// TEST(Test Suite name, Test Case name)
TEST(SolutionTest, ValidParentheses) {
  Solution solution;
   // Assertion macro
  EXPECT_TRUE(solution.isValid("()"));
  EXPECT_TRUE(solution.isValid("()[]{}"));
  EXPECT_TRUE(solution.isValid("{[]}"));
}

TEST(SolutionTest, InvalidParentheses) {
    Solution solution;

    // Invalid test cases
    EXPECT_FALSE(solution.isValid("(]"));
    EXPECT_FALSE(solution.isValid("([)]"));
    EXPECT_FALSE(solution.isValid("{[}"));
}

TEST(SolutionTest, EmptyString) {
    Solution solution;

    // Edge case: empty string
    EXPECT_TRUE(solution.isValid(""));
}

TEST(SolutionTest, SingleParentheses) {
    Solution solution;

    // Single parentheses
    EXPECT_FALSE(solution.isValid("("));
    EXPECT_FALSE(solution.isValid(")"));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}