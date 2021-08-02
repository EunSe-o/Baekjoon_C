#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string croaAlp;
	cin >> croaAlp;
	int cnt = 1;

	for (int index = 1; index < croaAlp.size(); index++)
	{
		cnt++;
		if (croaAlp[index] == '-' || croaAlp[index] == '=')
		{
			cnt--;
			if (index > 1 && croaAlp[index - 1] == 'z' && croaAlp[index - 2] == 'd')
				cnt--;
		}
		if (croaAlp[index] == 'j')
		{
			if (croaAlp[index - 1] == 'l' || croaAlp[index - 1] == 'n')
				cnt--;
		}
	}

	cout << cnt;

	return 0;
}