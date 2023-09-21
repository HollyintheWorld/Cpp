#include <iostream>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle() :
	Geometric()
{
	cout << "6.Rect con without para" << endl;
	Width = 0;
	Height = 0;
};
Rectangle::Rectangle(int width, int height) :
	Geometric()
{
	cout << "7.Rect con with para" << endl;
	//this->Filled = filled;
	this->Width = width; //==setwidth(width)
	this->Height = height; //==setheight(height)
}
Rectangle::Rectangle(const string& color, int width, int height, int x, int y)
	//Geometric(color, x, y)
{
	cout << "7.Rect con with para" << endl;
	//this->Filled = filled;
	this->Width = width; //==setwidth(width)
	this->Height = height; //==setheight(height)
}
Rectangle::Rectangle(const Rectangle& obj):
	Geometric(obj)
{ 
	cout << "8.Rect copy con" << endl;
	//Geometric(obj);
	//this->Filled = obj.Filled;
	//this->Color = obj.Color;
	this->Height = obj.Height;
	this->Width = obj.Width;
}
Rectangle::~Rectangle() {
	cout << "9.Rect decon" << endl;
}
/*
Rectangle Rectangle::operator=(const Rectangle& source) {
	cout << "10.Rect operator =" << endl;
	this->Filled = source.Filled;
	this->Color = source.Color;
	this->Width = source.Width;
	this->Height = source.Height;
}
*/
int Rectangle::getLength() {
	return 2 * (Height + Width);
}
int Rectangle::getWidth() {
	return Width;
}
void Rectangle::setWidth(int width) {
	this->Width = width;
}
int Rectangle::getHeight() {
	return Height;
}
void Rectangle::setHeight(int height) {
	this->Height = height;
}

void Rectangle::printAll() {
	cout << "\nRect print\n Width : " << Width << "\n Height : " << Height << endl;
	//cout << " Filled : " << Filled << "\n Color : " << Color << "\n\n";
	//printDes();
}
void  Rectangle::draw() {
	cout << "\nRect print\n Color : " << Color << "\n x,y: " << x << "," << y;
	cout << "\n width :" << Width << "\n height : " << Height << "\n\n" << endl;
}