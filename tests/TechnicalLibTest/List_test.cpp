#include "List.h"

#include <gtest/gtest.h>

#include <stdexcept>

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

  EXPECT_THROW(lstTest[5], std::out_of_range);

  // Remove the first element
  lstTest.Remove(10);
  EXPECT_NE(lstTest[0], 10);
  EXPECT_EQ(lstTest[0], 14);
  EXPECT_EQ(lstTest[1], 11);
  EXPECT_EQ(lstTest[2], 12);
  EXPECT_EQ(lstTest[3], 15);
  EXPECT_THROW(lstTest[4], std::out_of_range);

  // Remove an element from the middle
  lstTest.Remove(12);
  EXPECT_EQ(lstTest[0], 14);
  EXPECT_EQ(lstTest[1], 11);
  EXPECT_NE(lstTest[2], 12);
  EXPECT_EQ(lstTest[2], 15);
  EXPECT_THROW(lstTest[3], std::out_of_range);

  // Remove the last element
  lstTest.Remove(15);
  EXPECT_EQ(lstTest[0], 14);
  EXPECT_EQ(lstTest[1], 11);
  EXPECT_THROW(lstTest[2], std::out_of_range);
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
  EXPECT_THROW(lstTest[-1], std::out_of_range);
  EXPECT_THROW(lstTest[0], std::out_of_range);
  EXPECT_THROW(lstTest[5], std::out_of_range);
}
