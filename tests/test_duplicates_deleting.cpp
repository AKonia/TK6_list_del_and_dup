#include "ListExtented.hpp"
#include <gtest.h>

TEST(ListDuplicatesDeletion, full_shifting_of_one_valued_list)
{
	List<int> list;
	for(int i = 0; i < 10; i++)
		list.push(7);
	removeDuplicates(list);
	EXPECT_TRUE(1 == list.getSize());
	//EXPECT_EQ(2, 1+1);
}
/*
TEST(ListDuplicatesDeletion, wont_change_list_if_have_no_duplicates)
{
	List<int> list;
	for(int i = 0; i < 10; i++)
		list.push(i);
	List<int> copy(list);
	removeDuplicates(list);
	EXPECT_EQ(copy.getSize(), list.getSize());
	for(int i = 0; i < list.getSize(); i++)
		EXPECT_EQ(list[i], copy[i]);
}
*/
TEST(ListDuplicatesDeletion, can_delete_multiple_duplicates)
{
	List<int> list;
	for(int i = 0; i < 10; i++)
	{
		list.push(i);
		list.push(i);
	}
	removeDuplicates(list);
	for(int i = 0; i < list.getSize(); i++)
		EXPECT_EQ(i, list[i]);
	EXPECT_EQ(10, list.getSize());
}

