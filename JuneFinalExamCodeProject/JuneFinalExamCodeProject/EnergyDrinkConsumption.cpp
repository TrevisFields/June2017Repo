#include "EnergyDrinkConsumption.h"
#include <iostream>
#include <iomanip>
/*
	A soft drink company recently surveyed 16,500 of its customers and found that approximately 15 percent of those surveyed purchase one or more energy drinks per week. Of those customers who purchase energy drinks, approximately 58 percent of them perfer citrus-flavored energy drinks. Write a program that displays the following:
	
	--> The approximate number of customers in the survey who purchase one or more energy drinks per week
	--> The approximate number of customers in the survey who prefer citrus-flavored energy drinks
	*/
  // Includes Teachings from Chapters 2 and 3
EnergyDrinkConsumption::EnergyDrinkConsumption()
{
  // Constants
  const int CUSTOMERS = 16500;
  
  // Variables
  double weeklyPercent = .15; // amount of customers that purchase one or more energy drinks a week.
  double customerPercent = .58; // Number of customers that perfer citrus-flavored energy drinks.
  double approximate; // approximate number of people who purchase one or more energy drinks
  double approximateCitrusDrinks; // approximate number of people who perfer citrus energy drinks.
  
  // Calculate the approximate number of customers who get one or more energy drinks a week.
  approximate = CUSTOMERS * weeklyPercent;
  
  //Title of the Program running in Chapter 2
  std::cout << std::setw(20) << "	ENERGY DRINK CONSUMPTION \n";
  // Statements displayed to the screen for the user to read.
  std::cout << "Out of the " << CUSTOMERS << " surveyed, approximately " << approximate << " purchases one or more energy drinks a week." << std::endl;
  
  std::cout << "Of those " << approximate << " customers ";
  
  // Calculate the number of customers that perfered to have a citrus flavored energy drink
  approximateCitrusDrinks = approximate * customerPercent;
  
  std::cout << approximateCitrusDrinks << " perfered to have a citrus flavored energy drink." << std::endl;
}

EnergyDrinkConsumption::~EnergyDrinkConsumption()
{
  //Variables
  double customers;
  double weeklyPercent;
  double customerPercent;
  double approximate;
  double approximateCitrusDrinks;
  
  std::cout << "Enter in a number for customers. ";
  std::cin >> customers;
  std::cout << "Enter a whole number for the weekly percent. ";
  std::cin >> weeklyPercent;
  std::cout << "Enter a whole number for the customer percent. ";
  std::cin >> customerPercent;
  
  double decimalWeeklyPecent;
  decimalWeeklyPecent = weeklyPercent / 100;
  double decimalCustomerPercent;
  decimalCustomerPercent = customerPercent / 100;
  
  approximate = customers * decimalWeeklyPecent;
  approximateCitrusDrinks = approximate * decimalCustomerPercent;
  
  std::cout << "Out of the " << customers << " who purchased an energy drink, " << decimalWeeklyPecent << " percent purchased one or more energy drinks a week, and of those " << approximate << " customers " << approximateCitrusDrinks << " like to puchase citrus flavored drinks.\n";
}
