#include <iostream>
#include <string.h>
using namespace std;

void Sum(char a[], char b[])
{
	char tempA[10001] = { 0 }, tempB[10001] = { 0 };
	int result[10002] = { 0 };
	int cnt = 0, len = 0, sum = 0;

	for (int reverse = 0; reverse < strlen(a); reverse++)
		tempA[reverse] = a[strlen(a) - 1 - reverse];
	a = tempA;

	for (int reverse = 0; reverse < strlen(b); reverse++)
		tempB[reverse] = b[strlen(b) - 1 - reverse];
	b = tempB;

	if (strlen(a) >= strlen(b))
		len = strlen(a);
	else
		len = strlen(b);

	for (int sumAB = 0; sumAB < len; sumAB++)
	{
		sum = 0;
		if (a[sumAB] != '\0')
			sum += a[sumAB] - '0';
		if (b[sumAB] != '\0')
			sum += b[sumAB] - '0';

		if (cnt > 0)
		{
			sum++;
			cnt = 0;
		}

		if (sum > 9)
		{
			//		if (cnt == 0)
			result[sumAB] = sum - 10;
			//		else if (cnt > 0)
			//			result[sumAB] = sum - 10 + 1;
			cnt++;
		}
		else
		{
			//		if (cnt == 0)
			result[sumAB] = sum;
			//		else if (cnt > 0)
			//			result[sumAB] = sum + 1;
			//		cnt = 0;
		}
	}

	if (cnt == 0)
		result[len] = 0;
	else
		result[len] = 1;

	for (int print = 0; print < len + 1; print++)
	{
		if (print == 0)
		{
			if (result[len] == 0)
				continue;
		}

		cout << result[len - print];
	}
}

int main(void)
{
	char a[10001] = { 0 }, b[10001] = { 0 };

	cin >> a >> b;

	Sum(a, b);

	return 0;
}