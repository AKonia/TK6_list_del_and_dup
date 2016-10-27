#include "List.hpp"
#ifndef LISTS_EXTENTED_HPP
#define LISTS_EXTENTED_HPP

template<typename ListDataType>
void removeDuplicates(List<ListDataType> &source)
{
	for(int i = 0; i < source.getSize(); i++)
	      for(int j = i+1; j < source.getSize();)
	      {
	           if(source[i] == source[j])
	           {
	                source.removeElem(j);
	                continue;
	           }
	           j++;
	      }
}

#endif // LISTS_EXTENTION_HPP
