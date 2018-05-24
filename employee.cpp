#include "employee.h"
#include <iostream>
using namespace std;

Employee::Employee(string nm, int nb, string hd)
{
  name=nm;
  try
  {
    if(nb<0 || nb>9999)
      throw InvalidEmployeeNumber();
    number=nb;
  }
  catch(InvalidEmployeeNumber e)
  {
      cout << "Error: Invalid employee number" << endl;
  }
  hiredate=hd;
}
string Employee::getName()
{
  return name;
}
int Employee::getNumber()
{
  return number;
}
string Employee::getDate()
{
  return hiredate;
}
void Employee::setName(string newname)
{
  name=newname;
}
void Employee::setNumber(int newnum)
{
  try
  {
    if(newnum<0 || newnum>9999)
      throw InvalidEmployeeNumber();
    number=newnum;
  }
  catch(InvalidEmployeeNumber e)
  {
      cout << "Error: Invalid employee number" << endl;
  }
}
void Employee::setDate(string newdate)
{
  hiredate = newdate;
}
