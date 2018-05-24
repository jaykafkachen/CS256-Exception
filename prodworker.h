#ifndef _PRODWORKER_H
#define _PRODWORKER_H

#include "employee.h"

class ProdWorker : public Employee
{
  private:
    int shift;
    double pay;
  public:
    ProdWorker(string, int, string, int, double);
    void setShift(int);
    void setPay(double);
    int getShift();
    double getPay();
    class InvalidShift {}; //can only be 1 or 2
    class InvalidPayRate {}; //positive numbers only
};

#endif

/*
Next, write a class named ProductionWorker that is derived from the Employee class.
The ProductionWorker class should have member variables to hold the following
information:
• Shift (an integer)
• Hourly pay rate (a double)
The workday is divided into two shifts: day and night. The shift variable will hold an
integer value representing the shift that the employee works. The day shift is shift 1, and
the night shift is shift 2. Write one or more constructors and the appropriate accessor
and mutator functions for the class. Demonstrate the classes by writing a program that
uses a ProductionWorker object. 
*/
