#include <iostream>
#include <string>
using namespace std;

bool checkGroup(string wordStr)
{
	for (int index = 0; index < wordStr.size(); index++)
	{
		if (wordStr[index] == wordStr[index + 1])
			continue;
		for (int searchWord = index + 1; searchWord < wordStr.size(); searchWord++)
		{
			if (wordStr[index] == wordStr[searchWord])
				return 0;
		}
	}

	return true;
}

int main(void)
{
	int wordCase = 0;
	cin >> wordCase;
	int cntNum = 0;

	for (int inputData = 0; inputData < wordCase; inputData++)
	{
		string wordStr;
		cin >> wordStr;

		if (wordStr.size() == 1)
		{
			cntNum++;
			continue;
		}

		if (checkGroup(wordStr))
			cntNum++;
	}

	cout << cntNum;

	return 0;
}