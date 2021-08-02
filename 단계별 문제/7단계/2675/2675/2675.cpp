#include <iostream>
#include <string>
#pragma warning (disable:4996)
using namespace std;

int main(void)
{
	int tCase = 0;
	cin >> tCase;
	int cntRepeat = 0;

	for (int index = 0; index < tCase; index++)
	{
		string inputArr;
		cin >> cntRepeat;
		cin >> inputArr;

		for (int strNum = 0; strNum < sizeof(inputArr); strNum++)
		{
			for (int repArr = 0; repArr < cntRepeat; repArr++)
			{
				cout << inputArr[strNum];
			}
		}
		cout << endl;
	}

	return 0;
}