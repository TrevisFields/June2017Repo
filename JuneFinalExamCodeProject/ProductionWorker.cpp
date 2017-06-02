#include "ProductionWorker.h"
#include <iostream>
#include <fstream>
using namespace std;
/*
 Design a class named Employee. The class should keep the following information in
 
 --> Employee name
 --> Employee number
 --> Hire Date
 
 Write one or more constructors and the appropiate accessor and mutator functions for the class. Next write a class named ProductionWorker that is derived from the Employee class. The ProductionWorker class should have member variables to hold the following information:
 
 --> Shift (an integer)
 --> Hourly pay rate (a double)
 
 The workday is divided into two shifts day and night. The shift variable will hold an integer value representing the shift that the employee works. The day shift is shift 1, and the night shift is shift 2. Write one or more constructors and the appropriate accessor and mutator functions for the class. Demonstrate the classes by writing a program that uses a ProductionWorker object.
 */

int ProductionWorker::getRemainingHours() const
{
  int _regHours;			// Total required hours
  int _remainingHours;	// Remaining hours
  
  // Calculate the required hours.
  _regHours = (DAY_HOURS + DAY_SHIFT_HOURS + NIGHT_SHIFT_HOURS) ;
  
  // Calculate the remaining hours.
  _remainingHours = _regHours - (dayHours + nightShiftHours + dayHours) + 28;
  
  // Return the remaining hours
  return _remainingHours;
}

ProductionWorker::~ProductionWorker()
{
  
}
