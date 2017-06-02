#include "BankCharges.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

/*
 A bank charges $10 per month plus the following check fees for a commercial checking account:
 
 $.10 each for fewer than 20 checks
 $.08 each for 20-39 checks
 $.06 each for 40-59 checks
 $.04 each for 60 or more checks
 
 The bank also charges an extra $15 if the balance of the account falls below $400 (before any check fees are applied). Write a program that asks for the beginning balance and the number of checks written. Compute and display the bank's service fees for the month.
 
 --> Input Validation: Do not accept a negative value for the number of checks written. If a negative value is given for the beginning balance, display an urgent message indicating the account is overdrawn.
 */
  //Includes Teachings from Chapters 3 and 4.

BankCharges::BankCharges()
{
  // Constant Variables
  const double 	CHECKS_UNDER_20 = .10,
  CHECKS_UNDER_40 = .08,
  CHECKS_UNDER_60 = .06,
  CHECKS =.04;
  const double 	BANK_FEE = 15.00;
  
  // Variables
  double balance = 0.00;
  int checksWritten = 0;
  double charges = 0;
  double newBalance = 0;
  
  // Get the system time.
  unsigned seed = time(0);
  
  // Seed a random number generator.
  srand(seed);
  
  
  std::cout << "Please enter how much is in your bank account.\n";
  std::cin >> balance;
  
  if(balance < 0)
	 {
		std::cout << "YOUR ACCOUNT IS OVERDRAWN!!!\n";
	 }
  
  std::cout << "You have $" << balance << " in your account currently.\n";
  
  std::cout << "Please enter in the number of checks you are going to write.\n";
  std::cin >> checksWritten;
  
  
  
  if(balance < 400.00 && checksWritten <= 20)
	 {
		std::cout << "Your account is under the $400.00 daily limit.\n";
		newBalance = balance - BANK_FEE; // Determines the new balance of the account
		charges = newBalance - (checksWritten * CHECKS_UNDER_20);
		std::cout << "You will be charged a fee of $" << BANK_FEE << std::endl;
		std::cout << "Your new balance is $" << newBalance << " before the checks fees."<< std::endl;
		std::cout << "Your final balance is $" << charges << std::endl;
	 }
  
  else if(balance < 400.00 && checksWritten <= 39)
	 {
		std::cout << "Your account is under the $400.00 daily limit.\n";
		newBalance = balance - BANK_FEE;
		charges = newBalance - (checksWritten * CHECKS_UNDER_40);
		std::cout << "You will be charged a fee of $" << BANK_FEE << std::endl;
		std::cout << "Your new balance is $" << newBalance << " before the checks fees."<< std::endl;
		std::cout << "Your final balance is $" << charges << std::endl;
	 }
  else if(balance < 400.00 && checksWritten <= 59)
	 {
		std::cout << "Your account is under the $400.00 daily limit.\n";
		newBalance = balance - BANK_FEE;
		charges = newBalance - (checksWritten * CHECKS_UNDER_60);
		std::cout << "You will be charged a fee of $" << BANK_FEE << std::endl;
		std::cout << "Your new balance is $" << newBalance << " before the checks fees."<< std::endl;
		std::cout << "Your final balance is $" << charges << std::endl;
	 }
  else if(balance < 400.00 && checksWritten >= 60)
	 {
		std::cout << "Your account is under the $400.00 daily limit.\n";
		newBalance = balance - BANK_FEE;
		charges = newBalance - (checksWritten * CHECKS);
		std::cout << "You will be charged a fee of $" << BANK_FEE << std::endl;
		std::cout << "Your new balance is $" << newBalance << " before the checks fees."<< std::endl;
		std::cout << "Your final balance is $" << charges << std::endl;
	 }
  if(balance >= 400.00 && checksWritten <= 20)
	 {
		charges = balance - (checksWritten * CHECKS_UNDER_20);
		std::cout << "Your balance is $" << balance << " before the checks fees."<< std::endl;
		std::cout << "Your final balance is $" << charges << std::endl;
	 }
  else if(balance >= 400.00 && checksWritten <= 39)
	 {
		charges = balance - (checksWritten * CHECKS_UNDER_40);
		std::cout << "Your balance is $" << balance << " before the checks fees."<< std::endl;
		std::cout << "Your final balance is $" << charges << std::endl;
	 }
  else if(balance >= 400.00 && checksWritten <= 59)
	 {
		charges = balance - (checksWritten * CHECKS_UNDER_60);
		std::cout << "Your balance is $" << balance << " before the checks fees."<< std::endl;
		std::cout << "Your final balance is $" << charges << std::endl;
	 }
  else if(balance >= 400.00 && checksWritten >= 60)
	 {
		charges = balance - (checksWritten * CHECKS);
		std::cout << "Your balance is $" << balance << " before the checks fees."<< std::endl;
		std::cout << "Your final balance is $" << charges << std::endl;
	 }
  
  std::cout << "This is receipt #" << rand() << std::endl;
  std::cout << rand() % 100 << " days have passed since the last transaction." << std::endl;
}

BankCharges::~BankCharges()
{
  std::cout << "Now You Try" << std::endl;
  
  // Constant Variables
  const double 	CHECKS_UNDER_20 = .10,
  CHECKS_UNDER_40 = .08,
  CHECKS_UNDER_60 = .06,
  CHECKS =.04;
  const double 	BANK_FEE = 15.00;
  
  // Variables
  double balance = 0.00;
  int checksWritten = 0;
  double charges = 0;
  double newBalance = 0;
  std::string name1;
  std::string name2;
  
  // Declare output file
  std::ofstream outputFile;
  
  
  // Open an output file.
  outputFile.open("BankCharges.txt"); // Opens file for Microsoft applications
  outputFile.open("BankCharges.rtf"); // Opens file for Mac applications
  
  
  std::cout << "Please enter in your name: ";
  std::cin >> name1 >> name2;
  std::cout << "Welcome " << name1 << " "<< name2 << "\n";
  
  std::cout << "Please enter how much is in your bank account.\n";
  std::cin >> balance;
  
  if(balance < 0)
	 {
		std::cout << "YOUR ACCOUNT IS OVERDRAWN!!!\n";
		outputFile << "YOUR ACCOUNT IS OVERDRAWN!!!\n";
	 }
  
  std::cout << "You have $" << balance << " in your account currently.\n";
  outputFile << "You have $" << balance << " in your account currently.\n";
  
  std::cout << "Please enter in the number of checks you are going to write.\n";
  std::cin >> checksWritten;
  
  // Write Balance to the file
  // Write Checks written to the file
  outputFile << name1 << std::endl;
  outputFile << name2 << std::endl;
  outputFile << balance << std::endl;
  outputFile << checksWritten << std::endl;
  
  
  // Declared for the for loop
  int count;
  int days = 0;
  for(count = 0; count <= 5; count++)
	 {
		std::cout << days++ << " Day(s) since last transaction." << "\n" << std::endl;
  if(balance < 400.00 && checksWritten <= 20)
	 {
		std::cout << "Your account is under the $400.00 daily limit.\n";
		newBalance = balance - BANK_FEE; // Determines the new balance of the account
		charges = newBalance - (checksWritten * CHECKS_UNDER_20);
		std::cout << "You will be charged a fee of $" << BANK_FEE << std::endl;
		std::cout << "Your new balance is $" << newBalance << " before the checks fees."<< std::endl;
		std::cout << "Your final balance is $" << charges << std::endl;
	 }
  
  else if(balance < 400.00 && checksWritten <= 39)
	 {
		std::cout << "Your account is under the $400.00 daily limit.\n";
		newBalance = balance - BANK_FEE;
		charges = newBalance - (checksWritten * CHECKS_UNDER_40);
		std::cout << "You will be charged a fee of $" << BANK_FEE << std::endl;
		std::cout << "Your new balance is $" << newBalance << " before the checks fees."<< std::endl;
		std::cout << "Your final balance is $" << charges << std::endl;
	 }
  else if(balance < 400.00 && checksWritten <= 59)
	 {
		std::cout << "Your account is under the $400.00 daily limit.\n";
		newBalance = balance - BANK_FEE;
		charges = newBalance - (checksWritten * CHECKS_UNDER_60);
		std::cout << "You will be charged a fee of $" << BANK_FEE << std::endl;
		std::cout << "Your new balance is $" << newBalance << " before the checks fees."<< std::endl;
		std::cout << "Your final balance is $" << charges << std::endl;
	 }
  else if(balance < 400.00 && checksWritten >= 60)
	 {
		std::cout << "Your account is under the $400.00 daily limit.\n";
		newBalance = balance - BANK_FEE;
		charges = newBalance - (checksWritten * CHECKS);
		std::cout << "You will be charged a fee of $" << BANK_FEE << std::endl;
		std::cout << "Your new balance is $" << newBalance << " before the checks fees."<< std::endl;
		std::cout << "Your final balance is $" << charges << std::endl;
	 }
  if(balance >= 400.00 && checksWritten <= 20)
	 {
		charges = balance - (checksWritten * CHECKS_UNDER_20);
		std::cout << "Your balance is $" << balance << " before the checks fees."<< std::endl;
		std::cout << "Your final balance is $" << charges << std::endl;
	 }
  else if(balance >= 400.00 && checksWritten <= 39)
	 {
		charges = balance - (checksWritten * CHECKS_UNDER_40);
		std::cout << "Your balance is $" << balance << " before the checks fees."<< std::endl;
		std::cout << "Your final balance is $" << charges << std::endl;
	 }
  else if(balance >= 400.00 && checksWritten <= 59)
	 {
		charges = balance - (checksWritten * CHECKS_UNDER_60);
		std::cout << "Your balance is $" << balance << " before the checks fees."<< std::endl;
		std::cout << "Your final balance is $" << charges << std::endl;
	 }
  else if(balance >= 400.00 && checksWritten >= 60)
	 {
		charges = balance - (checksWritten * CHECKS);
		std::cout << "Your balance is $" << balance << " before the checks fees."<< std::endl;
		std::cout << "Your final balance is $" << charges << std::endl;
	 }
		}
  
  // Close the file
  outputFile.close(); // CLose File for Windows Applications
  outputFile.close(); // Close File for Mac Applications
  
  // Future code updates to do later after submission
  // Input code to put all of the code into a file after program executes.
  
}
