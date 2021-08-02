#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string str;
	getline(cin, str);
	int cnt = 1;

	if (str.empty())
	{
		cout << "0";
		return 0;
	}

	for (int searchStr = 0; searchStr < str.size(); searchStr++)
	{
		if (str[searchStr] == ' ')
			cnt++;
	}
	if (str[0] == ' ')
		cnt--;
	if (str[str.size() - 1] == ' ')
		cnt--;

	cout << cnt;
	return 0;
}