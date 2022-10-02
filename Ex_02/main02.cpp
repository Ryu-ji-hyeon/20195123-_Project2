#include <iostream>
#include<cmath>
#include<ctime>
#include<string>

using namespace std;

inline double calc_volume(double rad) {

	return (4.0 / 3.0 * 3.14 * pow(rad, 3));
}
bool in_Upper(string str)
{
	for (auto& c : str)
		if (isupper(c))
			return true;
	return false;
}

bool in_Lower(string str)
{
	for (auto& c : str)
		if (islower(c))
			return true;
	return false;
}

bool in_Number(string str)
{
	for (auto& c : str)
		if (48 <= c && c <= 57)
			return true;
	return false;
}
int main() {

	//p.160 2�� ����

	double rad;
	double vol;

	cout << "�������� �Է��Ͻÿ�: " ;
	cin >> rad;
	vol=calc_volume(rad);
	cout << "���� ���Ǵ�  " <<vol<< endl;

	//p.162 9�� ����

	srand((unsigned int)time(NULL));

	int dice1 = rand() % 6 + 1;
	int dice2 = rand() % 6 + 1;
	int result = dice1 + dice2;


	cout << "������� �ֻ���:  " << dice1 << "+" << dice2 << "=" << result << endl;

	if (result == 7 || result == 11)
		cout << "����ڰ� �̰���ϴ�." << endl;
	if (result == 2 || result == 3 || result==12)
		cout << "����ڰ� �����ϴ�." << endl;

	//p.164 13�� ����

	string pw;

	cout << "��ȣ�� �Է��Ͻÿ�: ";
	cin >> pw;

	if (in_Upper(pw) && in_Lower(pw) && in_Number(pw))
		cout << "�����մϴ�." << endl;
	else
		cout << "�������� �ʽ��ϴ�." << endl;


}

