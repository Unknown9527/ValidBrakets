#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

using namespace std;

TEST(ValidBracketTest0, ValidBracketTest0) {
  Solution solution;

  string s0 = "(a + b)";
  bool retult0 = 1;

  EXPECT_EQ(solution.ValidBracket(s0), retult0);
}

TEST(ValidBracketTest1, ValidBracketTest1) {
  Solution solution;

  string s1 = "(a+b)[c*d]{5g+h}";
  bool retult1 = 1;

  EXPECT_EQ(solution.ValidBracket(s1), retult1);
}

TEST(ValidBracketTest2, ValidBracketTest2) {
  Solution solution;

  string s2 = "(a+b]";
  bool retult2 = 0;

  EXPECT_EQ(solution.ValidBracket(s2), retult2);
}

TEST(ValidBracketTest3, ValidBracketTest3) {
  Solution solution;

  string s3 = "(7h+[5c)+7]";
  bool retult3 = 0;

  EXPECT_EQ(solution.ValidBracket(s3), retult3);
}

TEST(ValidBracketTest4, ValidBracketTest4) {
  Solution solution;

  string s4 = "{2k+[5j]}";
  bool retult4 = 1;

  EXPECT_EQ(solution.ValidBracket(s4), retult4);
}

TEST(ValidBracketTest5, ValidBracketTest5) {
  Solution solution;

  string s5 = "{2k++[5--*j]}";
  bool retult5 = 1;

  EXPECT_EQ(solution.ValidBracket(s5), retult5);
}

