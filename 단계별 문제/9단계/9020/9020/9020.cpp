#include <iostream>
#pragma warning (disable:4996)
using namespace std;

int main(void)
{
	int tCase = 0;
	scanf("%d", &tCase);
	int* natNum = new int[tCase];
	int max = 0;
	bool cnt = false;

	for (int inputData = 0; inputData < tCase; inputData++)
	{
		scanf("%d", &natNum[inputData]);
		if (natNum[inputData] > max)
			max = natNum[inputData];
	}

	bool* check = new bool[max + 1];
	for (int format = 0; format < max + 1; format++)
		check[format] = true;
	check[0] = false; check[1] = false;

	for (int mult = 2; mult < max + 1; mult++)
	{
		for (int checkPrime = mult * 2; checkPrime < max + 1; checkPrime += mult)
			check[checkPrime] = false;
	}

	for (int index = 0; index < tCase; index++)
	{
		for (int findPartDown = natNum[index] / 2; findPartDown > 1; findPartDown--)
		{
			if (check[findPartDown] == false)
				continue;

			for (int findPartUp = natNum[index] / 2; findPartUp < natNum[index] + 1; findPartUp++)
			{
				if (check[findPartUp] == false)
					continue;

				if (findPartDown + findPartUp == natNum[index])
				{
					printf("%d %d\n", findPartDown, findPartUp);
					cnt = true;
					break;
				}
			}
			if (cnt == true)
				break;
		}
		cnt = false;
	}
	return 0;
}