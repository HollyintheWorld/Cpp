#include <iostream>
#include "Permanent.h"
using namespace std;
//int salary
Permanent::Permanent()
	:Employee()
{
	cout << "\tPermanent con without para" << endl;
	salary = 0;
	}
Permanent::Permanent(int salary, const string& name) 
	:Employee(name)
{
	cout << "\tPermanent con with para" << endl;
	this->salary = salary;
}
Permanent::Permanent(const Permanent& obj) 
	:Employee(obj)
{
	cout << "\tPermanent copy con" << endl;
	this->salary = obj.salary;
}
Permanent::~Permanent() {
	cout << "\tPermanent decon" << endl;
}
void Permanent::print() {
	cout << "\nPermanent print\n name: " << name << "\n pay(getPay): " << getPay();
	cout << "\n salary : " << salary << endl;
}

int Permanent::getSalary() {
	return salary;
}
void Permanent::setSalary(int salary) {
	this->salary = salary;
}

int Permanent::getPay() {
	return salary;
}