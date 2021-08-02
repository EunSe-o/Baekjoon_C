#include <iostream>
using namespace std;

int main(void)
{
	string capAlp = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string word;
	cin >> word;
	int cntTime = 0;

	for (int printTime = 0; printTime < word.size(); printTime++)
	{
		if (word[printTime] == 'A' || word[printTime] == 'B'
			|| word[printTime] == 'C')
			cntTime += 3;
		else if (word[printTime] == 'D' || word[printTime] == 'E'
			|| word[printTime] == 'F')
			cntTime += 4;
		else if (word[printTime] == 'G' || word[printTime] == 'H'
			|| word[printTime] == 'I')
			cntTime += 5;
		else if (word[printTime] == 'J' || word[printTime] == 'K'
			|| word[printTime] == 'L')
			cntTime += 6;
		else if (word[printTime] == 'M' || word[printTime] == 'N'
			|| word[printTime] == 'O')
			cntTime += 7;
		else if (word[printTime] == 'P' || word[printTime] == 'Q'
			|| word[printTime] == 'R' || word[printTime] == 'S')
			cntTime += 8;
		else if (word[printTime] == 'T' || word[printTime] == 'U'
			|| word[printTime] == 'V')
			cntTime += 9;
		else if (word[printTime] == 'W' || word[printTime] == 'X'
			|| word[printTime] == 'Y' || word[printTime] == 'Z')
			cntTime += 10;
	}

	cout << cntTime;
	return 0;
}