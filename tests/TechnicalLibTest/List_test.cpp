#include "List.h"
#include <gtest/gtest.h>

// Demonstrate some basic assertions.
TEST(ListTest, Count_Should_Return_Correct_Nb_Element_List) {
  List<int> lstTest;
  EXPECT_EQ(lstTest.Count(), 0);

  lstTest.Add(99);
  EXPECT_EQ(lstTest.Count(), 1);
  
  lstTest.Add(99);
  lstTest.Add(99);
  EXPECT_EQ(lstTest.Count(), 3);
}
