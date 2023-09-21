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
	
	Rectangle r("blue", 5, 10, -1, -2); //string 오류남

	Geometric g;
	cout << "implicit upcasting between objs" << endl;
	g = c;
	g.draw();
*/
	//Geometric g; 추상 클래스는 객체화할 수 없음
	Circle c("blue", 4, 1, 10);
	cout << "implicit upcasting between pointers" << endl;
	Geometric* bp = &g;
	Circle* cp = &c;
	//bp = cp;
	//bp->draw();//geo draw

	cout << "explicit downcasting between pointers" << endl;
	//cp = bp; 암묵적 다운캐스팅은 컴파일 에러 유발
	cp = (Circle*)bp; //명시적 다운캐스팅( 제대로 동작하진 않음
	cp->draw(); //x y 제대로 안 나오는 게 순서 때문인지 뭐가 잘못된 건지 나주에 확인하기
	//radius에만 garbage 나와야한다는데 왜 x y 안 나옴
	return 0;
}

void func(Geometric obj) {
	cout << "\nfunc\n" << endl;
	obj.draw();
	cout << endl;
}