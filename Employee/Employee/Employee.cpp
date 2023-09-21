#include <iostream>
#include "Employee.h"
using namespace std;
/*
	int pay;
	string name;
	*/
Employee::Employee() {
	cout << "\tEmployee con without para" << endl;
	name = '\0';
}
Employee::Employee(const string& name) {
	cout << "\tEmployee con with para" << endl;
	this->name = name;
}
Employee::Employee(const Employee& obj) {
	cout << "\tEmployee copy con" << endl;
	this->name = obj.name;
}
Employee::~Employee() {
	cout << "\tEmployee decon" << endl;
}
/*
void Employee::print() {
	cout << "\nEmployee print\n name : " << name << endl;
}
*/
string Employee::getName() {
	return name;
}
void Employee::setName(const string& name) {
	this->name = name;
};
/*
int Employee::getPay() { pure virtual 구현 x employee는 순수 가상 함수 추상 클래스
	return 0;
} 

cout << "con without para" << endl;
cout << "con with para" << endl;
cout << "copy con" << endl;
cout << "decon" << endl;
*/