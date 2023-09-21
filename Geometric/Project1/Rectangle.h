#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Geometric.h"
#include <iostream>
using namespace std;

class Rectangle : public Geometric {
protected:
	int Width;
	int Height;
public:
	Rectangle();
	Rectangle(int, int);
	Rectangle(const string&, int, int, int, int);
	~Rectangle();
	Rectangle(const Rectangle&);
	//Rectangle operator=(const Rectangle&);
	
	int getLength();
	int getWidth();
	void setWidth(int);
	int getHeight();
	void setHeight(int);

	void printAll();
	void draw();
};
#endif