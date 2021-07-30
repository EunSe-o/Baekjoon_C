#include <iostream>
using namespace std;

int main(void)
{
	int testCase = 0;
	int cnt = 0;

	cin >> testCase;
	char** OorX = new char*[testCase];
	int* score  = new int[testCase];

	for (int inputOorX = 0; inputOorX < testCase; inputOorX++)
	{
		OorX[inputOorX] = new char[80];
		cin >> OorX[inputOorX];
	}

	for (int searchCase = 0; searchCase < testCase; searchCase++)
	{
		score[searchCase] = { 0 };
		for (int index = 0; index < 80; index++)
		{
			if (OorX[searchCase][index] == 'O')
			{
				cnt++;
				score[searchCase] += cnt;
			}
			else
				cnt = 0;
		}
	}

	for (int printScore = 0; printScore < testCase; printScore++)
		cout << score[printScore] << endl;

	return 0;
}