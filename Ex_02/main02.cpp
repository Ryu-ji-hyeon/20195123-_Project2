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

	//p.160 2번 문제

	double rad;
	double vol;

	cout << "반지름을 입력하시오: " ;
	cin >> rad;
	vol=calc_volume(rad);
	cout << "구의 부피는  " <<vol<< endl;

	//p.162 9번 문제

	srand((unsigned int)time(NULL));

	int dice1 = rand() % 6 + 1;
	int dice2 = rand() % 6 + 1;
	int result = dice1 + dice2;


	cout << "사용자의 주사위:  " << dice1 << "+" << dice2 << "=" << result << endl;

	if (result == 7 || result == 11)
		cout << "사용자가 이겼습니다." << endl;
	if (result == 2 || result == 3 || result==12)
		cout << "사용자가 졌습니다." << endl;

	//p.164 13번 문제

	string pw;

	cout << "암호를 입력하시오: ";
	cin >> pw;

	if (in_Upper(pw) && in_Lower(pw) && in_Number(pw))
		cout << "안전합니다." << endl;
	else
		cout << "안전하지 않습니다." << endl;


}

