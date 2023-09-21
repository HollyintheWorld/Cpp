#include "Circle.h"
#include <iostream>
using namespace std;
Circle::Circle() :
	Geometric() {
		cout << "11.Cir con without para" << endl;
	Radius = 0;
}
/*
Circle::Circle(string color, int radius) :
{
	cout << "12.Cir con with para" << endl;
	//this->Filled = filled;
	this->Color = color;
	this->Radius = radius;
}
*/
Circle::Circle(string color, int radius, int x, int y):
	Geometric(color, x, y){
	cout << "12.Cir con with para" << endl;
	this->Radius = radius;
}
Circle::~Circle() {
	cout << "13.Cir decon" << endl;
}
Circle::Circle(const Circle& obj):
	Geometric(obj){
	cout << "14.Cir copycon" << endl;
	//this->Filled = obj.Filled;
	this->Color = obj.Color;
	this->Radius = obj.Radius;
}
/*
Circle Circle::operator=(const Circle& obj) {
	cout << "14.Cir operator =" << endl;
	this->Filled = obj.Filled;
	this->Color = obj.Color;
	this->Radius = obj.Radius;
}
*/
int Circle::getRadius() {
	return Radius;
}
void Circle::setRadius(int radius) {
	this->Radius = radius;
}

void Circle::printAll() {
	cout << "\nCircle print\n Radius : " << Radius << endl;
	//cout << " Filled : " << Filled << "\n Color : " << Color << "\n\n";
	//printDes();
	
}
void Circle::draw() {
	cout << "\nCirc print\n Color : " << Color << "\n x,y: " << x << "," << y;
	cout << "\n radius : " << Radius << "\n\n";
}