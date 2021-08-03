#include <iostream>
using namespace std;

int main(void)
{
	int fracNum = 0;
	cin >> fracNum;
	if (fracNum == 1)
	{
		cout << "1/1";
		return 0;
	}

	if (fracNum == 2)
	{
		cout << "1/2";
		return 0;
	}

	int fraction[2] = { 1,2 };

	for (int index = 2; index < fracNum; index++)
	{
		if (fraction[0] == 1)
		{
			for (int down = 0; fraction[1] != 1; down++)
			{
				fraction[0]++;
				fraction[1]--;
				index++;
				if (index == fracNum)
				{
					cout << fraction[0] << "/" << fraction[1];
					return 0;
				}
			}
			fraction[0]++;
			continue;
		}

		if (fraction[1] == 1)
		{
			for (int up = 0; fraction[0] != 1; up++)
			{
				fraction[0]--;
				fraction[1]++;
				index++;
				if (index == fracNum)
				{
					cout << fraction[0] << "/" << fraction[1];
					return 0;
				}
			}
			fraction[1]++;
		}
	}

	return 0;
}