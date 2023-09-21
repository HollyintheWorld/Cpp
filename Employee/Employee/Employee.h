#include <iostream>
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
using namespace std;

class Employee {
protected:
	string name;

public:
	Employee();
	Employee(const string&);
	Employee(const Employee&);
	virtual ~Employee();
	//virtual void print(); ?

	string getName();
	void setName(const string&);
	virtual int getPay() = 0;
};
#endif