/*
	Geometric();
	Geometric(bool, string);
	~Geometric();
	Geometric operator=(Geometric);

bool getFilled();
void setFilled(bool);
string getColor();
void setColor(string);
void printAll();
*/
#include "Geometric.h"
#include <iostream>
using namespace std;

Geometric::Geometric() {
	cout << "1.Geo con without para" << endl;
	//Filled = false;
	Color = '\0';
	//Color = NULL;
}
Geometric::Geometric(string& color,int x, int y) {
	cout << "2.Geo con with para" << endl;
	//this->Filled = filled;
	this->Color = color;
	this->x = x;
	this->y = y;
}
Geometric::Geometric(const Geometric& obj) {
	cout << "3.Geo copy con" << endl;
	//this->Filled = obj.Filled;
	this->Color = obj.Color;
	this->x = obj.x;
	this->y = obj.y;
}
Geometric::~Geometric() {
	cout << "4.Geo decon" << endl;
}
/*
Geometric Geometric::operator=(const Geometric& source) {
	cout << "5.Geo operator = " << endl;
	this->Filled = source.Filled;
	this->Color = source.Color;
}

bool Geometric::getFilled() {
	return Filled;
}
void Geometric::setFilled(bool filled) {
	this->Filled = filled;
}*/
string Geometric::getColor() {
	return Color;
}
void Geometric::setColor(string color) {
	this->Color = color;
}
/*
void Geometric::printAll() {
	cout << "\nGeo print\n Filled : " << Filled << "\n Color : " << Color << "\n\n";
}

void Geometric::printDes() {
	cout << " Filled : " << Filled << "\n Color : " << Color << "\n\n";
}
*/
void  Geometric::draw() {
	cout << "\nGeo print\n Color : " << Color << "\n x,y: "<<x<<","<<y<<"\n\n";
}