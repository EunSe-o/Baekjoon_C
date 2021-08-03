#include <iostream>
using namespace std;

int Fibonacci(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	n = Fibonacci(n - 1) + Fibonacci(n - 2);

	return n;
}

int main(void)
{
	int natNum = 0;
	cin >> natNum;

	cout << Fibonacci(natNum);

	return 0;
}