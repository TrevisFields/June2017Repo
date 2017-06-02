#pragma once
#include <iostream>
  //Used code to learn how to do this but could not get it to work properly, this code breaks the program.
using namespace std;

class NumberSorting
{
private:
  struct ListNode
  {
	 double node;
	 struct ListNode *next;
  };
  
  ListNode *head;		//List head pointer
  
  //Private memeber functions
  int countNodes(ListNode *) const;
  void showReverse(ListNode *) const;
  
public:
	 // Constructor
  NumberSorting()
  { head = nullptr; }
  
  // Destructor
  ~NumberSorting();
  
  // Linked List Operations
  void appendNode(double);
  void insertNode(double);
  void deleteNode(double);
  void displayList() const;
  int numNodes() const
  {return countNodes(head); }
  void displayBackwards() const
  {showReverse(head);}
};
