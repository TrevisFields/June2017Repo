  //Trevis Fields
  //CIS 17A
  //Energy Drink Consumption Modified: 6/01/17
  //Bank Charges Modified: 6/02/17
/*
 --> EACH OF THE HEADER AND CPP FILES WITH THE SAME CORRESPONDING NAMES ARE INDIVIDUAL PROGRAMS FROM THE CHAPTER
 --> THERE WILL ONLY BE ONE MAIN FUNCTION THAT RUNS ALL OF THE PROGRAMS
 --> THERE MAY BE TOPICS FROM FUTURE CHAPTERS USED TO ALLOW EACH PROGRAM TO RUN BUT JUST FOLLOW ALONG STEP BY STEP
 */
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "EnergyDrinkConsumption.h"
#include "BankCharges.h"
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
  
}
