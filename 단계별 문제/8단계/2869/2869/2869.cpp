#include <iostream>
using namespace std;

int main(void)
{
	int up = 0, down = 0, height = 0;
	cin >> up >> down >> height;

	if (up >= height)
	{
		cout << "1";
		return 0;
	}

	if (up - down == 1)
	{
		int day = (height - up) / (up - down);
		cout << day + 1;
		return 0;
	}

	int day = (height - up) / (up - down);

	if ((height - up) % (up - down) != 0)
		day++;

	cout << day + 1;

	return 0;
}