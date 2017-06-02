#pragma once
#include <iostream>
#include <string>
using namespace std;

class EmployeeAndProductionWorkerClasses
{
protected:
  string name;			// Used for Employee name
  string idNumber;	// Used for Employee ID
  int yearHired;		// Used for Year Employee was hired
  
  
public:
  // Default Constructor
  EmployeeAndProductionWorkerClasses()
  {
	 name = "";
	 idNumber = "";
	 yearHired = 0;
  }
  
  // Constructor
  EmployeeAndProductionWorkerClasses(string _name, string _id, int _year)
  { set(_name, _id, _year);}
  
  void set(string _name, string _id, int _year)
  {
	 name = _name;				//Assigns name
	 idNumber = _id;			// Assigns ID number
	 yearHired = _year;		//Assigns year hired
  }
  
  // Accessor functions
  const string getName() const
  {
	 return name;
  }
  
  const string getIdNumber() const
  {
	 return idNumber;
  }
  
  int getYearHired() const
  {
	 return yearHired;
  }
  
  // Pure virtual function
  virtual int getRemainingHours() const = 0;
  


  
};
