#include "Employee.h"
#include <iostream>
#ifndef TEMPORARY_H
#define TEMPORARY_H

class Temporary : public Employee {
protected:
	int hourlyWage;
	int hours;
public:
	Temporary();
	Temporary(int, int, const string&);
	Temporary(const Temporary&);
	~Temporary();
	void print();

	int getHourlyWage();
	void setHourlyWage(int);
	int getHours();
	void setHours(int);

	int getPay();
};
#endif