#include <iostream>
#include<cmath>
#include<ctime>
#include <cstdlib>

using namespace std;

int main() {

	//p.115, 1�� ����.
	 
	int days[] = {31,29,31,30,31,30,31,31,30,31,30,31};

	for (int i = 1; i <= 12; i++)
		cout << i << "���� " << days[i - 1] << "�ϱ��� �ֽ��ϴ�." << endl;

	//p.117, 10�� ����
	
	for (int a = 1; a <= 100; a++) {
		for (int b = 1; b <= 100; b++) {
			for (int c = 1; c <= 100; c++) {
				if ((a*a)+(b*b)==(c*c))
					cout << a << " " << b << " " << c<<endl;
			}
		}
	}

	//p.119, 16�� ����

	int cash = 50;
	const int goal = 250;

	int bets, win; 
	bool result; 
	int wins = 0; 
	int total = 0;

	srand((unsigned int)time(NULL));

	cout << "�ʱ� �ݾ� $" << cash << endl;
	cout << "��ǥ �ݾ� $" << goal << endl;

	
	for (int game = 0; game < 1000; game++)
	{
		cash = 50, bets = 0, win = 0; 
		while (true)
		{
			bets++;
			if ((double)rand() / RAND_MAX < 0.5)
			{
				cash++;
				win++;
			}
			else
				cash--;

			if (cash <= 0)
			{
				result = false;
				break;
			}
			if (cash >= goal)
			{
				result = true;
				break;
			}
		}

		if (result == true)
			wins++; 
		total += bets; 
	}

	cout << "1000 ���� " << wins << "�� �¸�" << endl;
	cout << fixed; 
	cout.precision(6); 
	cout << "�̱� Ȯ��=" << wins / 1000.0 * 100.0 << endl;
	cout << "��� ���� Ƚ�� = " << total / 1000.0 << endl;

	return 0;
	
}
