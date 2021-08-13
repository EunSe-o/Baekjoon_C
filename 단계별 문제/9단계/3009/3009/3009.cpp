#include <iostream>
using namespace std;

int main(void)
{
	int coordinate[3][2] = { 0 };
	int cntX = 1, cntY = 1;
	int coord[2] = { 0 };
	int difX = 0, difY = 0;

	for (int tCase = 0; tCase < 3; tCase++)
	{
		for (int xy = 0; xy < 2; xy++)
			cin >> coordinate[tCase][xy];
	}

	for (int tCase = 1; tCase < 3; tCase++)
	{
		if (coordinate[tCase][0] == coordinate[0][0])
			cntX++;
		else
			difX = coordinate[tCase][0];

		if (coordinate[tCase][1] == coordinate[0][1])
			cntY++;
		else
			difY = coordinate[tCase][1];
	}

	if (cntX == 1)
		coord[0] = coordinate[0][0];
	else
		coord[0] = difX;

	if (cntY == 1)
		coord[1] = coordinate[0][1];
	else
		coord[1] = difY;

	cout << coord[0] << " " << coord[1];

		return 0;
}