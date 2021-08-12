#include <iostream>
#pragma warning (disable:4996)
using namespace std;

int main(void)
{
	int m = 0, n = 0;
	scanf("%d %d", &m, &n);

	bool* check = new bool[n + 1];

	check[0] = false; check[1] = false;
	for (int format = 2; format < n + 1; format++)
		check[format] = true;

	for (int mult = 2; mult <= n; mult++)
	{
		if (check[mult] == true)
		{
			for (int notPrime = mult * 2; notPrime <= n; notPrime += mult)
				check[notPrime] = false;
		}
	}

	for (int print = m; print <= n; print++)
	{
		if (check[print] == true)
			printf("%d\n", print);
	}


	return 0;
}