#include "Groceries.h"
#include <iostream>
#include <string>
using namespace std;

const int 	GRAB_CHOICE = 1,
			ERASE_CHOICE = 2,
			FINISH_CHOICE = 3;
template <class Food>
Groceries<Food>::Groceries(int basket)
{
  groceriesArray = new Food[basket];
  groceriesSize = basket;
  begining = -1;
}

template <class Food>
Groceries<Food>::Groceries(const Groceries &type)
{
  if(type.groceriesArray > 0)
	 groceriesArray = new Food[type.groceriesSize];
  else
	 groceriesArray = nullptr;
  
  groceriesSize = type.groceriesSize;
  
  for(int bill = 0; bill < groceriesSize; bill++)
	 groceriesArray[bill] = type.groceriesArray[bill];
  
  begining = type.begining;
}

template <class Food>
Groceries<Food>::~Groceries()
{
  if(groceriesSize > 0)
	 delete [] groceriesArray;
}

template <class Food>
void Groceries<Food>::push(Food number)
{
  if(willGrab()())
	 {
		cout << "The item is free.\n";
	 }
  else
	 {
		begining++;
		groceriesArray[begining] = number;
	 }
}

template <class Food>
void Groceries<Food>::pop(Food &number)
{
  if(willPutBack())
	 {
		cout << "The item has a copoun.\n";
	 }
  else
  {
	 number = groceriesArray[begining];
	 begining--;
  }
}

template <class Food>
bool Groceries<Food>::willGrab()
{
  bool payment;
  
  if(begining == groceriesSize - 1)
	 payment = true;
  else
	 payment = false;
  
  return payment;
}
template <class Food>
bool Groceries<Food>::willPutBack()
{
  bool payment;
  
  if(begining == -1)
	 payment = true;
  else
	 payment = false;
  
  return payment;
}

void menu(int &choice)
{
  cout << "\nWhat do you need to buy on your grocery list?\n" << GRAB_CHOICE << "- Put an item on your list\n" << ERASE_CHOICE << "- erase an entry\n" << FINISH_CHOICE << "- Finish grocery list\n" << "Enter your choice: ";
  cin >> choice;
  
  while(choice < GRAB_CHOICE || choice > ERASE_CHOICE)
	 {
		cout << "You are not going to survive much longer. ";
		cin >> choice;
	 }
}

void writeItem(Groceries<string> &groceries)
{
  string number;
  cin.ignore();
  cout << "\nWrite down an item: ";
  getline(cin, number);
  groceries.push(number);
}

void eraseItem(Groceries<string> &groceries)
{
  string number = "";
  
  groceries.pop(number);
  
  if(number != "")
	 cout << number << " was erased from your list.\n";
}

void getGroceriesSize(int &basket)
{
  cout << "How long will your grocery list be? ";
  cin >> basket;
  
  while(basket < 2)
	 {
		cout << "You must write 2 items or more. ";
		cin >> basket;
	 }
}

void GroceriesDisplay()
{
  int listSize;
  int choice;
  
  getGroceriesSize(groceriesSize);
  
  Groceries<string> groceries(getGroceriesSize);
  try {
  do
	 {
		menu(choice);
		
		if(choice != FINISH_CHOICE)
		{
		  switch(choice)
		  {
				case GRAB_CHOICE:
				writeItem(groceries);
				break;
				case ERASE_CHOICE:
				eraseItem(groceries);
		  }
		}
	 }while(choice != FINISH_CHOICE);
}
 catch (string wrongItem)
  {
	 cout << wrongItem;
}
}

string notAListItem(string wrongItem)
{
  if (basket = "")
	 {
		string wrongItem = "You cannot get that.\n";
		throw wrongItem;
	 }
}

  //Used chapter 18-3  to create this program to try and get an understanding of how to place the code into a different file to run in the menu program that i created. Could not figure out everything that i could but wanted to submit the code in for grading before it was to late. Would like to continue to work on this code and the other code that i have over the course of my learning even though the class is over.

  //It is partly and mostly my own fault for not having very well working code due to missing multiple classes during the course of the semester and not asking enough questions to get a better understanding of how to write code in a more in depth manner that would warrent a better grade then what this program displays.
