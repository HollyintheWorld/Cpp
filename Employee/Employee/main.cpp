#include <iostream>
#include <fstream>
#include "Employee.h"
#include "Permanent.h"
#include "Temporary.h"
#include "Sales.h"


using namespace std;
void printMenu();
void insertPermanent(Employee** e,int& count,int size);
void insertTemporary(Employee** e, int& count, int size);
void insertSales(Employee** e, int& count, int size);
void ShowAll(Employee** e, int count ); //value 로 넘기기?
void Store(Employee** e, int count);
void Exit(Employee** e, int count);
bool checkFull(Employee** e, int count, int size);
int main() {
	const int MAX = 2;
	enum { PERMANENT = 1, TEMPORARY, SALES, SHOW, STORE, EXIT };
	int choice;

	int count = 0;
	Employee* e[MAX] = { NULL };//객체포인터 배열
	while (true) {
		printMenu();
		cout << "입력 : ";
		cin >> choice;
		switch (choice) {

		case PERMANENT:
			insertPermanent(e, count, MAX);
			break;
		case TEMPORARY:
			insertTemporary(e, count, MAX);

			break;
		case SALES:
			insertSales(e, count, MAX);
			break;
		case SHOW:
			ShowAll(e, count);
			break;
		case STORE:
			cout << "저장" << endl;
			Store(e, count);
			break;
		case EXIT:	
			Exit(e, count);
			return 0;
			break;
		default:
			cout << "잘못된 선택" << endl;
			break;
		}//switch

	} //while
	return 0;
}

void printMenu() {
	cout << "-------menu-------" << endl;
	cout << "1. 직원 입력(Permanent)\n2. 직원 입력(Temporary)\n3. 직원 입력(Sales)\n4. 모든 직원 급여 출력(Show monthly wage" << endl;
	cout << "5. 파일 저장(Store)\n6. 종료(Exit)" << endl;
}

/*
* 체크 항목
* v con para copycon decon print
* getPay virtual 포인터로
* getname setname 직원 별
*/
bool checkFull(Employee** e, int count, int size) 
{
	if (count >= size) {
		cout << "최대 " << size << "명의 정보 저장 가능. 현재 " << count << "명" << endl;
	}
	return count<size;
}
void insertPermanent(Employee** e, int& count, int size) {
	//count size 비교
	if (count < size) {
		string name;
		int salary;
		cout << "name: ";
		cin >> name;
		cout << "salary: ";
		cin >> salary;
		e[count] = new Permanent(salary, name);
		count+=1;
	}
	else
		cout << "최대 " << size << "명의 정보 저장 가능. 현재 " << count << "명" << endl;
}
void insertTemporary(Employee** e, int& count, int size) {
	if (count == size) {
		cout << "최대 " << size << "명의 정보 저장 가능. 현재 " << count << "명" << endl;
		return;
	}
	else {
		string name;
		int time,pay;
		cout << "name: ";
		cin >> name;
		cout << "work time: ";
		cin >> time;
		cout << "hourly pay";
		cin >> pay;
		e[count] = new Temporary(pay, time, name);
		count += 1;
	}
}
void insertSales(Employee** e, int& count, int size) {
	if (checkFull(e, count, size))
	{
		string name;
		int basicSalary, earning;
		cout << "name: ";
		cin >> name;
		cout << "basicSalary: ";
		cin >> basicSalary;
		cout << "earning: ";
		cin >> earning;
		e[count] = new Sales(basicSalary, earning, name);
		count++;
	}
}
void ShowAll(Employee** e, int count) {
	cout << "show" << endl;
	//cout << "Name: " << e[0]->getName() << endl;
	for (int i = 0; i < count; i++) {
		cout << "i: " << i << "count : " << count << endl;
		cout << "Name: " << e[i]->getName() << endl;
		cout << "Pay: " << (e[i])->getPay() << endl;
	}//정규직 일시직 세일즈 출력 방법 고민해보기 - 숙제 x
}

void Store(Employee** e, int count) {
	ofstream fout;
	char fileName[100];
	cout << "file name: ";
	cin >> fileName;
	fout.open(fileName);//default :truncate//truct 파일 지우고 다시 작성함(overwrite)
	if (!fout) {
		cout << "file not found" << endl;
		return;
	}
	
	for (int i = 0; i < count; i++) {
		fout << e[i]->getName() << endl;
		fout << "  " << (e[i])->getPay() << endl;
	}
	fout.close();
}

void Exit(Employee** e, int count) {
	for (int i = 0; i < count; i++) {
		delete e[i]; e[i] = NULL;
	}
}
