#include <iostream>
using namespace std;

int main(void)
{
	int n = 0, x = 0;

	cin >> n >> x;
	int* seq = new int[n];

	for (int i = 0; i < n; i++)
		cin >> *(seq+i);

	for (int i = 0; i < n; i++)
	{
		if (*(seq+i) < x)
			cout << *(seq+i) << " ";
	}

	return 0;
}