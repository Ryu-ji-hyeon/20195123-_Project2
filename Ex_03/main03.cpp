#include <iostream>
#include <cstdlib>
#include<string>

using namespace std;

int main() {

	//p.353 1번 문제

	int num;

	cout << "몇 개의 정수를 입력합니까? ";
	cin >> num;

	int* ptr = new int[num];

	for (int a = 0; a < num; a++) {
		cout << "정수를 입력하시오 : " ;
		cin >> ptr[a];
	}
	cout << "입력된 정수는: ";
	for (int a = 0; a < num; a++) {
		cout << ptr[a]<<", ";
	}
	delete[] ptr;

	//p.353 2번 문제

	int num;

	cout << "얼마나 많은 이름을 입력 하시겟습니까? ";
	cin >> num;

	string* name = new string[num];
	for (int a = 0; a < num; a++) {
		cout << "이름 입력 # " << a + 1 << ": ";
		cin >> name[a];
	}
	cout << endl;
	cout << "다음은 이름 목록입니다."<<endl;

	for (int a = 0; a < num; a++) {
		cout << "이름 #" << a + 1 << ": " << name[a] << endl;
		
	}
	delete[] name;

}