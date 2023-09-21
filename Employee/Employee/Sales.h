#include <iostream>
#include "Employee.h"
#ifndef SALES_H
#define SALES_H
class Sales : public Employee {
protected:
	int basicSalary;
	int earning;
public:
	Sales();
	Sales(int, int, const string&);
	Sales(const Sales&);
	~Sales();
	void print();

	int getBasicSalary();
	void setBasicSalary(int);
	int getEarning();
	void setEarning(int);	

	int getPay();
};
#endif