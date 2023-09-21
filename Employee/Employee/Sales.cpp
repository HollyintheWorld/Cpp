#include <iostream>
#include "Sales.h"
using namespace std;
/*
	int basicSalary;
	int earning;
*/
Sales::Sales()
	:Employee()
{
	cout << "\tSales con without para" << endl;
	basicSalary = 0;
	earning = 0;
}
Sales::Sales(int basicSalary, int earning, const string& name) 
	:Employee(name)
{
	cout << "\tSales con with para" << endl;
	this->basicSalary = basicSalary;
	this->earning = earning;
}
Sales::Sales(const Sales& obj)
	:Employee(obj)
{
	cout << "\tSales copy con" << endl;
	this->basicSalary = obj.basicSalary;
	this->earning = obj.earning;
}
Sales::~Sales() {
	cout << "\tSales decon" << endl;
}
void Sales::print() {
	cout << "\nSales print\n name: " << name << "\n pay(getPay): " << getPay();
	cout << "\n basicSalary: " << basicSalary << "\n earning: " << earning << endl;
}
int Sales::getBasicSalary() {
	return basicSalary;
}
void Sales::setBasicSalary(int basicSalary) {
	this->basicSalary = basicSalary;
}
int Sales::getEarning() {
	return earning;
}
void Sales::setEarning(int earning) {
	this->earning = earning;
}
int Sales::getPay() {
	return basicSalary + earning*0.2;
}
/*
cout << "con without para" << endl;
cout << "con with para" << endl;
cout << "copy con" << endl;
cout << "decon" << endl;
*/	