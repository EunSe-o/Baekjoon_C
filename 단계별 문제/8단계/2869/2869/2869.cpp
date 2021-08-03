#include <iostream>
using namespace std;

int main(void)
{
	int up = 0, down = 0, height = 0;
	cin >> up >> down >> height;
	if (up - down == 1)
	{
		cout << height - up + 1;
		return 0;
	}

	int day = height / (up - down) + 1;
	for (height %= (up - down); height >= 0; day++)
	{
		height -= up;
		if (height <= 0)
		{
			cout << day;
			return 0;
		}
		height += down;
	}

	return 0;
}