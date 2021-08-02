#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string word;
	string smallAlp = "abcdefghijklmnopqrstuvwxyz";
	string capAlp = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int check[27] = { 0 };

	cin >> word;
	for (int checkAlp = 0; checkAlp < 27; checkAlp++)
	{
		for (int wordCnt = 0; wordCnt < word.size(); wordCnt++)
		{
			if (word[wordCnt] == smallAlp[checkAlp]
				|| word[wordCnt] == capAlp[checkAlp])
				check[checkAlp]++;
		}
	}

	int most = check[0];
	int whatNum = 0;
	for (int searchChk = 1; searchChk < 27; searchChk++)
	{
		if (check[searchChk] > most)
		{
			most = check[searchChk];
			whatNum = searchChk;
		}
	}

	for (int ifSame = 0; ifSame < 27; ifSame++)
	{
		if (ifSame == whatNum)
			continue;
		if (most == check[ifSame])
		{
			cout << "?";
			return 0;
		}
	}

	cout << capAlp[whatNum];


	return 0;
}