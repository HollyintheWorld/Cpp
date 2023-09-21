#include <iostream>
using namespace std;
#include "GeometricObject.h"
#include "DerivedRectangle.h"
#include "DerivedCircle.h"
void func(GeometricObject g);
const int MAX = 5;
int main() { 
	cout << "sizeof(GeometricObject) : " << sizeof(GeometricObject) << endl;
	// virtual ���� 40bytes
	
	// ������ ���� �迭���� �غ��Ѵ�.
	GeometricObject* A[MAX] = { NULL }; // ��ü������ �迭
	//geo s; �߻�Ŭ������ ��üȭ �Ұ�
	A[0] = new Circle(100, "blue", 100, 50);
	A[1] = new Rectangle(300,300,"red",50,100);
	A[2] = new Rectangle(200, 350, "red", 70, 200);
	A[3] = new Circle(300, "green", 200, 70);
	A[4] = new GeometricObject("purple", 300, 100);
	//geo ���� ����: polymorphism, ���
	for (int i = 0; i < MAX; i++) {
		A[i]->Draw(); // polymorphism
	}
	for (int i = 0; i < MAX; i++) {
		delete A[i];
		A[i] = NULL;
	}
	//Circle c(100, "Blue", 50, 10);
	//c.Draw();
	//func(c);
	//Rectangle r(140, 100, "Red", 30, 70);
	//r.Draw();
	//GeometricObject g;
	//cout << "implicit upcasting between objects" << endl;
	//g = c;
	//g.Draw();
	//cout << "implicit upcasting between pointers " << endl;
	//GeometricObject* bp = &g;
	//Circle* dp = &c;
	//bp = dp;
	//bp->Draw(); // Geo Draw�� ����ȴ�.
	//cout << "explicit downcasting between pointers " << endl;
	////dp = bp; �Ϲ��� downcasting�� �����Ϸ� ������ �����Ѵ�.
	//bp = &g; // �ʱ�ȭ
	//dp = (Circle*)bp;
	//dp->Draw();
	return 0;
}

void func(GeometricObject g) {
	cout << endl << "in func() " << endl;
	g.Draw();
	cout << endl;
}


