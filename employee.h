#ifndef _EMPLOYEE_H
#define _EMPLOYEE_H

#include <string>
using namespace std;

class Employee
{
  public:
    Employee(string, int, string);
    string getName();
    int getNumber();
    string getDate();
    void setName(string);
    void setNumber(int);
    void setDate(string);
    class InvalidEmployeeNumber {};
  protected:
    string name;
    int number;
    string hiredate;
};

#endif

/*Employee and ProductionWorker Classes
Design a class named Employee. The class should keep the following information in
• Employee name
• Employee number
• Hire date
Write one or more constructors and the appropriate accessor and mutator functions for the class.*/
