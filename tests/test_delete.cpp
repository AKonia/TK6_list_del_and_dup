#include "ListExtented.hpp"
#include <gtest.h>

TEST(ListElemDeletion, can_get_list_size)
{
	List<int> list;
	for(int i = 0; i < 10; i++)
		list.push(i);
	EXPECT_EQ(10, list.getSize());
}

TEST(ListElemDeletion, size_changes_after_deleting_elem)
{
	List<int> list;
	for(int i = 0; i < 10; i++)
		list.push(i);
	EXPECT_EQ(10, list.getSize());
	list.removeElem(7);
	EXPECT_EQ(9, list.getSize());
}
///*
TEST(ListElemDeletion, can_delete_last_elem)
{
	List<int> list;
	for(int i = 0; i < 10; i++)
		list.push(i);
	list.removeElem(list.getSize()-1);
	for(int i = 0; i < list.getSize(); i++)
		EXPECT_EQ(i, list[i]);
}

TEST(ListElemDeletion, can_delete_from_head)
{
	List<int> list;
	for(int i = 0; i < 10; i++)
		list.push(i);
	list.removeElem(0);
	for(int i = 0; i < list.getSize(); i++)
		EXPECT_EQ(i+1, list[i]);
}

TEST(ListElemDeletion, can_delete_from_middle)
{
	const int indxOfDel = 7; 
	List<int> list;
	for(int i = 0; i < 10; i++)
		list.push(i);
	list.removeElem(indxOfDel);
	for(int i = 0, j = 0; i < list.getSize(); i++, j++)
	{
		if(i == indxOfDel)
			j++;
		EXPECT_EQ(j, list[i]);
	}
	
}

TEST(ListElemDeletion, throws_after_deleting_elem_of_empty_list)
{
	List<int> list;
	ASSERT_ANY_THROW(list.removeElem(0));
}

TEST(ListElemDeletion, throws_after_trying_to_use_elem_with_too_large_index)
{
	List<int> list;
	for(int i = 0; i < 10; i++)
		list.push(i);
	ASSERT_ANY_THROW(list[15]);
}

TEST(ListElemDeletion, throws_after_trying_to_use_elem_of_empty_list)
{
	List<int> list;
	ASSERT_ANY_THROW(list[0]);
}//*/
