#include <iostream>

#include "employee.h"
using namespace std;

int main()
{
    fullTimeEmployee e1("Peter", "Smith", 80, 50000, 5800);
//    partTimeEmployee e2("John", "Bill", 200, 15, 60);

    e1.print();
    cout <<endl;
  //  employeeType obj1; this is not allowed, because pure virtual
  //  obj1.display();
  //  e2.print();
  //
  	personType obj1("joey","king");
	
//	obj1 *P=&e1;
//
	obj1.print();//not display joey king


    return 0;
}
