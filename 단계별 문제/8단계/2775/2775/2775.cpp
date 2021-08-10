#include <iostream>
using namespace std;

int main(void)
{
	int tCase = 0;
	cin >> tCase;

	int(*info)[2] = new int[tCase][2];
	for (int inputData = 0; inputData < tCase; inputData++)
		cin >> info[inputData][0] >> info[inputData][1];

	for (int search = 0; search < tCase; search++)
	{
		int people[15][15] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14, };
		if (info[search][0] == 0)
			cout << people[info[search][0]][info[search][1]];

		else
		{
			for (int k = 1; k <= info[search][0]; k++)
			{
				for (int n = 1; n <= info[search][1]; n++)
				{
					for (int sum = 1; sum <= n; sum++)
						people[k][n] += people[k - 1][sum];
				}
			}
			cout << people[info[search][0]][info[search][1]] << endl;
		}
	}


	return 0;
}