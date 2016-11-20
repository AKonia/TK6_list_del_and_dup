#include "../include/ListExtented.hpp"
#include <iostream>
int main()
{
	List<int> mylist;
	for(int i = 0; i < 10; i++)
	{
    	mylist.push(i);
    	mylist.push(i);
	}
	mylist.push(4);
	for(int i = 0; i < mylist.getSize(); i++)
		std::cout << mylist[i] << " -> ";
	removeDuplicates(mylist);
    	mylist.removeElem(7);
	mylist.removeElem(3);	
	std::cout << std::endl << std::endl;
    for(int i = 0; i < mylist.getSize(); i++)
		std::cout << mylist[i] << " -> ";
	return 0;
}
