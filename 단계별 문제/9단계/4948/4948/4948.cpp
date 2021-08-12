#include <iostream>
#pragma warning (disable:4996)
using namespace std;

int main(void)
{
	int natNum = 1;
	while (1)
	{
		scanf("%d", &natNum);
		if (natNum == 0)
			return 0;
		int cnt = 0;

		bool* check = new bool[natNum * 2 + 1];
		for (int checkFalse = 0; checkFalse <= natNum * 2; checkFalse++)
			check[checkFalse] = true;
		check[0] = false; check[1] = false;

		for (int mult = 2; mult <= natNum * 2; mult++)
		{
			for (int checkPrime = mult * 2; checkPrime <= natNum * 2; checkPrime += mult)
				check[checkPrime] = false;
		}

		for (int search = natNum + 1; search <= natNum * 2; search++)
		{
			if (check[search] == true)
				cnt++;
		}

		printf("%d\n", cnt);
	}

	return 0;
}