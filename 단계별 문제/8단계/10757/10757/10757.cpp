#include <iostream>
using namespace std;

void Sum(char a[], char b[])
{
	char tempA[10001] = { 0 }, tempB[10001] = { 0 };
	char result[10002] = { 0 };
	int cnt = 0, len = 0, sum = 0;

	for (int reverse = 0; reverse < strlen(a); reverse++)
		tempA[reverse] = a[strlen(a) - reverse];
	a = tempA;

	for (int reverse = 0; reverse < strlen(b); reverse++)
		tempB[reverse] = b[strlen(b) - reverse];
	b = tempB;

	if (strlen(a) >= strlen(b))
		len = strlen(a);
	else
		len = strlen(b);

	for (int sumAB = 0; sumAB < len; sumAB++)
	{
		sum = (a[sumAB] - '0') + (b[sumAB] - '0');

		if (sum > 9)
		{
			if (cnt == 0)
				result[sumAB] = sum - 10;
			else if (cnt > 0)
				result[sumAB] = sum - 10 + 1;
			cnt++;
		}
		else
		{
			if (cnt == 0)
				result[sumAB] = sum - 10;
			else if (cnt > 0)
				result[sumAB] = sum - 10 + 1;
			cnt = 0;
		}
	}
	for (int print = 1; print < strlen(result); print++)
	{
		cout << result[strlen(result) - print];
	}
}

int main(void)
{
	char a[10001] = { 0 }, b[10001] = { 0 };

	cin >> a >> b;

	Sum(a, b);

	return 0;
}