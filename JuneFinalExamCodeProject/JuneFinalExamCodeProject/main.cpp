  // Trevis Fields
  // CIS 17A
  // Energy Drink Consumption Modified: 06/01/17
  // Bank Charges Modified: 06/02/17
  // Lowest Score Drop Modified: 06/02/17
  // Upload / Due Date: 06/02/17 for earlier grade checking
  // Final upload day : 06/05/17
/*
 FINAL EXAM PROJECT REQUIREMENTS:
 --> CLASSES -- complete
 THE PRIMARY REQUIREMENT FOR THE PROJECT. DEMONSTRATE AN UNDERSTANDING OF CODE REUSE AND ENCAPSULATION BY USING CLASSES. MORE THAN 2
 --> INHERITANCE -- complete
 - AT LEAST ONE EXAMPLE
 ACCESS MODIFIERS -- no protected modifiers used yet/ no private modifiers used yet
 - DEMONSTRATE AN UNDERSTANDING OF PRIVATE/PUBLIC/PROTECTED
 --> POLYMORPHISM -- ???
 -AT LEAST ONE EXAMPLE
 --> RECURSION -- i believe this is complete
 - AT LEAST ONE EXAMPLE
 --> GENERIC COLLECTIONS -- in progress
 - AT LEAST 2 EXAMPLES
 --> DYNAMIC MEMORY ALLOCATION -- in progress
 - USE LIBERALLY
 --> EXCEPTION HANDLING -- in progress
 - USE LIBERALLY
 --> OPERATOR OVERLOADING -- in progress
 - AT LEAST ONE EXAMPLE
 --> ERRORS -- minor checking errors still in place
 - AT THIS POINT THERE SHOULD BE A GOOD UNDERSTANDING OF HOW TO USE THE DEBUGGER. POINTS WILL BE DEDUCTED FOR BUGS.
 
 EXTRA CREDIT:
 --> DIAGRAM
 - COMPLETE
 --> MULTIPLE INHERITANCE
 */
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "EnergyDrinkConsumption.h"
#include "BankCharges.h"
#include "LowestScoreDrop.h"
using namespace std;

void EndOfChapterRepeat();
void MenuList();
int main()
{ // Opening of Main Function
  int run;
  
  do
  { // Outer most Do/While loop opening brace
	 cout << "Please select a choice to view a chapter you would like to review. at the end of each running chapter is a program i attempted to write myself.\n";
	 MenuList();
	 
	 int choice;
	 cin >> choice;
	 
	 switch(choice)
	 {
	 case 1:
	 { // Opening brace for case 1
		int selection;
		
		do
		{ // opening brace of do/while loop
		  { //opening brace inside do/while loop
		  cout << setw(40) << "Chapter Program Constructors.\n";
		  EnergyDrinkConsumption drink1;
		  cout << "\n" << setw(40) << "Now displaying Destructors.\n";
		  } //Closing brace inside of do/while loop
		  cout << "\nPress [ENTER]\n";
		  system("pause");
		  EndOfChapterRepeat(); //displays before call to destructor
		  cin >> selection;
		  system("cls");
		}while(selection != 0); //end of do while loop inside of case 1
	 }// closing brace for case 1
		  break;
		  
		case 2:
		{ // Opening brace for case 2
		  int selection;
		  
		  do
		  { // opening brace of do/while loop of case 2
			 { //opening brace inside do/while loop
				cout << setw(40) << "Chapter Program Constructors.\n";
				BankCharges charges1;
				cout << "\n" << setw(40) << "Now displaying Destructors.\n";
			 } //Closing brace inside of do/while loop
			 cout << "\nPress [ENTER]\n";
			 system("pause");
			 EndOfChapterRepeat(); //displays before call to destructor
			 cin >> selection;
			 system("cls");
		  }while(selection != 0); //end of do/while loop inside of case 2
		}// closing brace for case 2
		  break;
		  
		case 3:
		  int selection;
		  do
		  { // opening brace of do/while loop
		  { //opening brace inside do/while loop
		  cout << setw(40) << "Chapter Program Constructors.\n";
		  LowestScoreDrop score1;
		  cout << "\n" << setw(40) << "Now displaying Destructors.\n";
		  } //Closing brace inside of do/while loop
		  cout << "\nPress [ENTER]\n";
		  system("pause");
		  EndOfChapterRepeat(); //displays before call to destructor
		  cin >> selection;
		  system("cls");
		  }while(selection != 0); //end of do while loop inside of case 3

		  break;
		  
	 default:
		  system("cls");
		  system("clear");
		  cout << "Invalid selection. Please choose from the menu list or Press 0 to Exit.\n";
		  MenuList();
	 }//End of Switch Statments
	 cout << "Enter any interger to return to the main MENU or -1 to exit.\n";
	 cin >> run;
  }while(run != -1); // outer most Do/While loop closing brace
  
} // End of Main Function

void EndOfChapterRepeat() // Used for do/while loop with selection input
{
  cout << "Would you like to repeat this chapter?\n";
  cout << "1) REPLAY.\n";
  cout << "0) RETURN TO MENU.\n";
}

void MenuList() // Used in choice input
{
  cout << "Menu\n";
  cout << "1) Introduction to C++/ Expressions and Interactivity\n" << setw(40) << "(Chapter 2 and Chapter 3)\n";
  cout << "2) Making Decisions and Loops and Files\n" << setw(40) << "(Chapter 4 and Chapter 5)\n";
  cout << "3) Functions and Arrays\n" << setw(40) << "(Chapter 6 and Chapter 7)\n";
  
}
