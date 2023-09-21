#include "Employee.h"
#ifndef PERMANENT_H
#define PERMANENT_H

class Permanent : public Employee {
protected:
	int salary;
public:
	Permanent();
	Permanent(int, const string&);
	Permanent(const Permanent&);
	~Permanent();
	void print();

	int getSalary();
	void setSalary(int);

	int getPay();
};
#endif