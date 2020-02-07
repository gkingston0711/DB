#include "employee.h"
#include <iostream>

using namespace std;

employeeType::employeeType(string first, string last, int id):personType(first, last)//inizilization list
{
//this->firstname=first;
//this->lastname=last;

this->personId=id;
}


void employeeType::setId(int id)
{
	this->personId=id;
}

int employeeType::getId() const
{
	return this->personId;
}

void employeeType::display()
{
	cout << "This is parent! \n" <<endl;
}
/********************************************************************************************/
fullTimeEmployee::fullTimeEmployee(string first, string last, int id, int salary, int bonus):employeeType(first,last,id)
{
	this->my_salary=salary;
	this->my_bonus=bonus;
}

void fullTimeEmployee::display()
{
	cout << "This is child! \n" <<endl;
}

void fullTimeEmployee::set(string first, string last, int id, int salary, int bonus)
{
	setName(first,last);
	setSalary(salary);
	setBonus(bonus);
	setId(id);
	
}

void fullTimeEmployee::setSalary(int salary)
{
	this->my_salary=salary;
}

void fullTimeEmployee::setBonus(int bonus)
{
	this->my_bonus=bonus;
}

int fullTimeEmployee::getSalary()
{
	return this->my_salary;
}

int fullTimeEmployee::getBonus()
{
	return this->my_bonus;
}

int fullTimeEmployee::calculatePay() const

{
return my_salary+my_bonus;
}


void fullTimeEmployee::print() const
{
    cout << "Id: " << getId() << endl;
    cout << "Name: ";
    personType::print();
    cout << endl;
    cout << "Wage: $" << calculatePay() << endl;
}

/****************************************************************************************************** */
partTimeEmployee::partTimeEmployee(string first, string last, int id, int rate, int hour):employeeType(first,last,id)
{
this->my_rate=rate;
this->my_hour=hour;	
}

void partTimeEmployee::set(string first, string last, int id, int rate, int hour)
{
	partTimeEmployee(first,last,id,rate,hour);
//	this->my_rate=rate;
//	this->my_hour=hour;
}

void partTimeEmployee::setRate(int rate)
{
	this->my_rate=rate;
}

void partTimeEmployee::setHour(int hour)
{
	this->my_hour=hour;
}

int partTimeEmployee::getRate()
{
	return this->my_rate;
}


int partTimeEmployee::getHour()
{
	return this->my_hour;
}

int partTimeEmployee::calculatePay() const
{
	return my_rate+my_hour;//i kinda think this should be mult tho, but one we did together is add
}

void partTimeEmployee::print() const
{
  /*  cout << "Id: " << getId() << endl;
    cout << "Name: ";
    personType::print();
    cout << endl;
    cout << "Wage: $" << calculatePay() << endl; */
}
