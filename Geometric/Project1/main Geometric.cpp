#include <iostream>
using namespace std;
#include "GeometricObject.h"
#include "DerivedRectangle.h"
#include "DerivedCircle.h"
void func(GeometricObject g);
const int MAX = 5;
int main() { 
	cout << "sizeof(GeometricObject) : " << sizeof(GeometricObject) << endl;
	// virtual 없이 40bytes
	
	// 도형을 담을 배열들을 준비한다.
	GeometricObject* A[MAX] = { NULL }; // 객체포인터 배열
	//geo s; 추상클래스는 객체화 불가
	A[0] = new Circle(100, "blue", 100, 50);
	A[1] = new Rectangle(300,300,"red",50,100);
	A[2] = new Rectangle(200, 350, "red", 70, 200);
	A[3] = new Circle(300, "green", 200, 70);
	A[4] = new GeometricObject("purple", 300, 100);
	//geo 존재 이유: polymorphism, 상속
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
	//bp->Draw(); // Geo Draw가 실행된다.
	//cout << "explicit downcasting between pointers " << endl;
	////dp = bp; 암묵적 downcasting은 컴파일러 에러를 유발한다.
	//bp = &g; // 초기화
	//dp = (Circle*)bp;
	//dp->Draw();
	return 0;
}

void func(GeometricObject g) {
	cout << endl << "in func() " << endl;
	g.Draw();
	cout << endl;
}


