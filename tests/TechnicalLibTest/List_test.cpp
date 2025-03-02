#include "List.h"

#include <gtest/gtest.h>

TEST(ListTest, Count_Should_Return_Correct_Nb_Element_List) {
  List<int> lstTest;
  EXPECT_EQ(lstTest.Count(), 0);

  lstTest.Add(99);
  EXPECT_EQ(lstTest.Count(), 1);

  lstTest.Add(99);
  lstTest.Add(99);
  EXPECT_EQ(lstTest.Count(), 3);
}

TEST(ListTest, Remove_Should_Remove_Correct_Element_List) {
  List<int> lstTest;

  // Inserting the test data
  lstTest.Add(10);
  lstTest.Add(14);
  lstTest.Add(11);
  lstTest.Add(12);
  lstTest.Add(15);

  // Remove the first element
  lstTest.Remove(10);
  EXPECT_NE(lstTest[0], 10);
  EXPECT_EQ(lstTest[0], 14);
  EXPECT_EQ(lstTest[1], 11);
  EXPECT_EQ(lstTest[2], 12);
  EXPECT_EQ(lstTest[3], 15);

  // Remove an element from the middle
  lstTest.Remove(12);
  EXPECT_EQ(lstTest[0], 14);
  EXPECT_EQ(lstTest[1], 11);
  EXPECT_NE(lstTest[2], 12);
  EXPECT_EQ(lstTest[2], 15);

  // Remove the last element
  lstTest.Remove(15);
  EXPECT_EQ(lstTest[0], 14);
  EXPECT_EQ(lstTest[1], 11);
  EXPECT_NE(lstTest[2], 15);
}

TEST(ListTest, Clear_Should_Clear_All_Elements_List) {
  List<int> lstTest;

  // Inserting the test data
  lstTest.Add(10);
  lstTest.Add(14);
  lstTest.Add(11);
  lstTest.Add(12);
  lstTest.Add(15);

  EXPECT_EQ(lstTest.Count(), 5);

  // Clearing data should remove all elements
  lstTest.Clear();

  EXPECT_EQ(lstTest.Count(), 0);
}
