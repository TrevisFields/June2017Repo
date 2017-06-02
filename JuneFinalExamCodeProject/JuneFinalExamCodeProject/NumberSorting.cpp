#include "NumberSorting.h"
#include <iostream>
#include <string>
using namespace std;

int NumberSorting::countNodes(ListNode *nodePtr) const
{
  if(nodePtr != nullptr)
	 return 1 + countNodes(nodePtr -> next);
  else
  return 0;
}

void NumberSorting::showReverse(ListNode *nodePtr) const
{
  if (nodePtr != nullptr)
	 {
		showReverse(nodePtr -> next);
		cout << nodePtr -> node << " ";
	 }
}
