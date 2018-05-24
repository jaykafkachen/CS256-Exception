#include "prodworker.h"
#include <iostream>
using namespace std;

ProdWorker::ProdWorker(string nm, int nb, string hd, int s, double p): Employee(nm,nb,hd)
{
  try
  {
    if(s!=1 && s!=2)
      throw InvalidShift();
    shift = s;
    if(p<0)
      throw InvalidPayRate();
    pay = p;
  }
  catch(InvalidShift is)
  {
    cout << "Error: Invalid shift" << endl;
  }
  catch(InvalidPayRate ipr)
  {
    cout << "Error: Invalid pay rate" << endl;
  }
}
void ProdWorker::setShift(int newshift)
{
  try
  {
    if(newshift!=1 && newshift!=2)
      throw InvalidShift();
    shift = newshift;
  }
  catch(InvalidShift is)
  {
    cout << "Error: Invalid shift" << endl;
  }
}
void ProdWorker::setPay(double newpay)
{
  try
  {
    if(newpay<0)
      throw InvalidPayRate();
    pay = newpay;
  }
  catch(InvalidPayRate ipr)
  {
    cout << "Error: Invalid pay rate" << endl;
  }
}
int ProdWorker::getShift()
{
  return shift;
}
double ProdWorker::getPay()
{
  return pay;
}
