#ifndef GEOMETRIC_H
#define GEOMETRIC_H
#include <iostream>
using namespace std;

class Geometric {
protected:
	//bool Filled;
	string Color; //string �� iostream, namespace std �ʿ�
	int x, y;
public:
	Geometric();
	Geometric(string&, int, int);
	~Geometric();
	Geometric(const Geometric&);
	//Geometric operator=(const Geometric&);
	//x,y getter setter
	/*bool getFilled();
	void setFilled(bool);*/
	string getColor();
	void setColor(string);
	/*
	int getX();
	void setX(int);
	int getY();
	void setY(int);
	
	void printAll(); //tostring
	void printDes();*/
	virtual void draw() = 0; //pure virtual 
	//�Լ� ��ü Ŭ������ �߻� Ŭ������ ��
};
#endif