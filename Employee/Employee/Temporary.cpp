#include <iostream>
#include "Temporary.h"

/*
	int hourlyWage;
	int hours;
	*/
Temporary::Temporary() 
	:Employee()
{
	cout << "\tTemporary con without para" << endl;
	hourlyWage = 0;
	hours = 0;
}
Temporary::Temporary(int hourlyWage, int hours, const string& name)
:Employee(name)
{
	cout << "\tTemporary con with para" << endl;
	this->hourlyWage = hourlyWage;
	this->hours = hours;
}
Temporary::Temporary(const Temporary& obj)
	:Employee(obj)
{
	cout << "\tTemporary copy con" << endl;
	this->hourlyWage = obj.hourlyWage;
	this->hours = obj.hours;
}
Temporary::~Temporary() {
	cout << "\tTemporary decon" << endl;
}
void Temporary::print() {
	cout << "\nTemporary print\n name: " << name<< "\n pay(getPay): " << getPay();
	cout << "\n hourlyWage: " << hourlyWage << "\n hours: " << hours << endl;
}

int Temporary::getHourlyWage() {
	return hourlyWage;
}
void Temporary::setHourlyWage(int hourlyWage) {
	this->hourlyWage = hourlyWage;
}
int Temporary::getHours() {
	return hours;
}
void Temporary::setHours(int hours) {
	this->hours = hours;
}

int Temporary::getPay() {
	return hourlyWage * hours;
}