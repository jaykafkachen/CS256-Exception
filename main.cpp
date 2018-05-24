#include "employee.h"
#include "prodworker.h"
#include <iostream>
using namespace std;
#include <cstdio>

int main()
{
  string name;
  int number;
  string date;
  int shift;
  double pay;
  cout << "Enter employee information:" << endl;
  cout << "Name: ";
  cin >> name;
  cout << "Employee #: ";
  cin >> number;
  cout << "Date Hired: ";
  cin >> date;
  Employee e(name,number,date);
  printf("\nYou Entered:\nName: %s\nNumber: %d\nDate Hired: %s\n", e.getName().c_str(),e.getNumber(),e.getDate().c_str());
  
  name="";
  number=0;
  date="";
  cout << "\n\nEnter production worker info:" << endl;
  cout << "Name: ";
  cin >> name;
  cout << "Employee #: ";
  cin >> number;
  cout << "Date Hired: ";
  cin >> date;
  cout << "Shift (1 for day, 2 for night): ";
  cin >> shift;
  cout << "Hourly pay: $";
  cin >> pay;
  ProdWorker p(name, number, date, shift, pay);
  printf("\nYou Entered:\nName: %s\nNumber: %d\nDate Hired: %s\n", p.getName().c_str(),p.getNumber(),p.getDate().c_str());
  if(p.getShift()==1)
    cout << "Shift: day (1)" << endl;
  else if(p.getShift()==2)
    cout << "Shift: night (2)" << endl;
  else
    cout << "Shift: invalid" << endl;
  printf("Hourly pay: $%.2f",p.getPay());
  return 0;
}
/* 
Exception Project
Modify the Employee and
ProductionWorker classes so they throw exceptions when the following errors occur:
• The Employee class should throw an exception named InvalidEmployeeNumber when it receives an employee number that is less than 0 or greater than 9999.
• The ProductionWorker class should throw an exception named InvalidShift when it receives an invalid shift.
• The ProductionWorker class should throw an exception named InvalidPayRate when it receives a negative number for the hourly pay rate.

Write a driver program that demonstrates how each of these exception conditions
works. */
