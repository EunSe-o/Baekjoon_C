#include <iostream>
using namespace std;

int Factorial(int n)
{
	if (n == 1 || n == 0)
		return 1;

	n *= Factorial(n - 1);

	return n;
}

int main(void)
{
	int natNum = 0;
	cin >> natNum;

	cout << Factorial(natNum);

	return 0;
}