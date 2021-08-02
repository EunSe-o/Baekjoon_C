#include <iostream>
using namespace std;

int main(void)
{
	int natNum = 0;
	cin >> natNum;

	if (natNum == 1)
	{
		cout << "1";
		return 0;
	}

	int roomNum = 2;
	int cnt = 1;
	for (int index = 1; index < natNum + 1; index++)
	{
		cnt++;
		if (natNum >= roomNum && natNum < roomNum + (index * 6))
		{
			cout << cnt;
			return 0;
		}
		roomNum += 6 * index;
	}

	return 0;
}