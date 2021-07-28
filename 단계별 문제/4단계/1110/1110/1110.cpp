#include <iostream>
using namespace std;

int main(void)
{
	int n = 0, sum = 0, cnt = 0;
	int newNumber[2] = { 0 };
	int makeNumber[2] = { 0 };
	cin >> n;

	if (n < 10)
	{
		newNumber[0] = 0;
		newNumber[1] = n;
	}
	else if (9 < n && n < 100)
	{
		newNumber[0] = n / 10;
		newNumber[1] = n % 10;
	}

	sum = newNumber[0] + newNumber[1];
	makeNumber[0] = newNumber[1];
	makeNumber[1] = sum % 10;
	sum = makeNumber[0] + makeNumber[1];
	cnt++;

	while (10 * newNumber[0] + newNumber[1] !=
		10 * makeNumber[0] + makeNumber[1])
	{
		makeNumber[0] = makeNumber[1];
		makeNumber[1] = sum % 10;
		sum = makeNumber[0] + makeNumber[1];
		cnt++;
	}

	cout << cnt;

	return 0;
}