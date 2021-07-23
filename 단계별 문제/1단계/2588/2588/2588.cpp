#include <iostream>
using namespace std;

int main(void)
{
	int a = 0, b = 0;
	int one=0, ten=0, hund=0;

	cin >> a >> b;
	one = a * (b % 10);
	ten = a * ((b % 100) / 10);
	hund = a * (b / 100);

	cout << one << endl;
	cout << ten << endl;
	cout << hund << endl;
	cout << one + ten*10 + hund*100 << endl;

	return 0;
}