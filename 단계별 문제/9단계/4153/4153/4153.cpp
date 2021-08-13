#include <iostream>
using namespace std;

int main(void)
{
	int mostLong = 0;
	while (1)
	{
		int side[3] = { 0 };
		cin >> side[0] >> side[1] >> side[2];
		if (side[0] == 0 && side[1] == 0 && side[2] == 0)
			return 0;

		int sum = 0, lastNum = 0;
		mostLong = side[0];
		for (int isLong = 1; isLong < 3; isLong++)
		{
			if (side[isLong] > mostLong)
			{
				mostLong = side[isLong];
				lastNum = isLong;
			}
		}

		for (int sumSide = 0; sumSide < 3; sumSide++)
		{
			if (lastNum != sumSide)
				sum += side[sumSide] * side[sumSide];
		}

		if (mostLong * mostLong == sum)
			cout << "right" << endl;
		else
			cout << "wrong" << endl;
	}

	return 0;
}