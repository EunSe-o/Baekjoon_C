#include <iostream>
using namespace std;

int main(void)
{
	int fixed = 0, variable = 0, price = 0;
	cin >> fixed >> variable >> price;

	if (variable >= price)
	{
		cout << "-1";
		return 0;
	}

	int profit = price - variable;
	int bePoint = fixed / profit + 1;
	cout << bePoint;

	return 0;
}