#ifndef CIRCLE_H
#define CIRCLE_H
#include "Geometric.h"
#include <iostream>
using namespace std;

class Circle : public Geometric {
protected:
	int Radius;

public:
	Circle();
	//Circle(string, int);
	Circle(string, int, int, int);

	~Circle();
	Circle(const Circle&);
	//Circle operator=(const Circle&);

	int getRadius();
	void setRadius(int);

	void printAll();
	void draw();
};
#endif