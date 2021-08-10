#include <iostream>
using namespace std;

int main(void)
{
	int tCase = 0;
	cin >> tCase;
	int cnt = 1;

	int(*info)[3] = new int[tCase][3];
	for (int inputData = 0; inputData < tCase; inputData++)
	{
		cin >> info[inputData][0] >> info[inputData][1] >> info[inputData][2];
	}

	for (int search = 0; search < tCase; search++)
	{
		for (int col = 1; col <= info[search][1]; col++)
		{
			for (int row = 1; row <= info[search][0]; row++)
			{
				if (info[search][2] == cnt)
				{
					if (col > 9)
						cout << row << col;
					else
						cout << row << "0" << col;
				}
				cnt++;
			}
		}
		cout << endl;
		cnt = 1;
	}


	return 0;
}