#include <iostream>
#include <cstdlib>
#include<string>

using namespace std;

int main() {

	//p.353 1�� ����

	int num;

	cout << "�� ���� ������ �Է��մϱ�? ";
	cin >> num;

	int* ptr = new int[num];

	for (int a = 0; a < num; a++) {
		cout << "������ �Է��Ͻÿ� : " ;
		cin >> ptr[a];
	}
	cout << "�Էµ� ������: ";
	for (int a = 0; a < num; a++) {
		cout << ptr[a]<<", ";
	}
	delete[] ptr;

	//p.353 2�� ����

	int num;

	cout << "�󸶳� ���� �̸��� �Է� �Ͻðٽ��ϱ�? ";
	cin >> num;

	string* name = new string[num];
	for (int a = 0; a < num; a++) {
		cout << "�̸� �Է� # " << a + 1 << ": ";
		cin >> name[a];
	}
	cout << endl;
	cout << "������ �̸� ����Դϴ�."<<endl;

	for (int a = 0; a < num; a++) {
		cout << "�̸� #" << a + 1 << ": " << name[a] << endl;
		
	}
	delete[] name;

}