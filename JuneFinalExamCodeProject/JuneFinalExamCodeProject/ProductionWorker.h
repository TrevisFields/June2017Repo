#pragma once
#include "EmployeeAndProductionWorkerClasses.h"
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

const int DAY_HOURS = 24.00;
const int DAY_SHIFT_HOURS = 12.00;
const int NIGHT_SHIFT_HOURS = 12.00;

class ProductionWorker : public EmployeeAndProductionWorkerClasses
{
private:
  int dayHours; // total hours in a day
  int dayShiftHours; // total hours worked during the day shift
  int nightShiftHours; // total hours worked during the night shift
  
public:
  // Default constructor
  ProductionWorker() : EmployeeAndProductionWorkerClasses()
  {
	 dayHours = 24;
	 dayShiftHours = 0;
	 nightShiftHours = 0;
  }
  
  // Constructor

  ~ProductionWorker();
  ProductionWorker(string _name, string _id, int _year) : EmployeeAndProductionWorkerClasses(_name, _id, _year)
  {
	 dayHours = 24;
	 dayShiftHours = 0;
	 nightShiftHours = 0;
  }
  
  // Mutator functions
  void setDayHours(int dh)
  {
	 dayHours = dh;
  }
  
  void setDayShiftHours(int dsh)
  {
	 dayShiftHours = dsh;
  }
  
  void setNightShiftHours(int nsh)
  {
	 nightShiftHours = nsh;
  }
  
  //Overridden getRemainingHours function defined in ProductionWorker.cpp
  virtual int getRemainingHours() const;
};
