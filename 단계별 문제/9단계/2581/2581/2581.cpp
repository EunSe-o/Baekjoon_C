#include <iostream>
using namespace std;

int main(void)
{
	int m = 0, n = 0;
	cin >> m >> n;
	int min = 0, sum = 0;
	int prime[10000] = { 0 };
	int cnt = 0;

	if (n == 1)
	{
		cout << "-1";
		return 0;
	}

	if (m == 1 || m == 2 || n == 2)
	{
		prime[0] = 2;
		cnt++;
	}

	for (int searchPrime = m; searchPrime <= n; searchPrime++)
	{
		for (int index = 2; index < searchPrime; index++)
		{
			if (searchPrime % index == 0)
				break;

			if (index == searchPrime - 1)
				prime[cnt++] = searchPrime;
		}
	}

	if (cnt == 0)
	{
		cout << "-1";
		return 0;
	}

	min = prime[0];
	for (int sumPrime = 0; sumPrime < cnt; sumPrime++)
		sum += prime[sumPrime];

	cout << sum << endl << min;

	return 0;
}