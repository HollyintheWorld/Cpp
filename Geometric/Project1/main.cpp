#include "Geometric.h"
#include "Rectangle.h"
#include "Circle.h"
#include <iostream>
using namespace std;

void func(Geometric obj); 
int main() {
	/*
	Circle c("blue", 4, 1,10);
	c.draw();
	func(c);
	
	Rectangle r("blue", 5, 10, -1, -2); //string ������

	Geometric g;
	cout << "implicit upcasting between objs" << endl;
	g = c;
	g.draw();
*/
	//Geometric g; �߻� Ŭ������ ��üȭ�� �� ����
	Circle c("blue", 4, 1, 10);
	cout << "implicit upcasting between pointers" << endl;
	Geometric* bp = &g;
	Circle* cp = &c;
	//bp = cp;
	//bp->draw();//geo draw

	cout << "explicit downcasting between pointers" << endl;
	//cp = bp; �Ϲ��� �ٿ�ĳ������ ������ ���� ����
	cp = (Circle*)bp; //����� �ٿ�ĳ����( ����� �������� ����
	cp->draw(); //x y ����� �� ������ �� ���� �������� ���� �߸��� ���� ���ֿ� Ȯ���ϱ�
	//radius���� garbage ���;��Ѵٴµ� �� x y �� ����
	return 0;
}

void func(Geometric obj) {
	cout << "\nfunc\n" << endl;
	obj.draw();
	cout << endl;
}