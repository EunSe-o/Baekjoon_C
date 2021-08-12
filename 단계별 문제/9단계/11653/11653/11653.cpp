#include <iostream>
using namespace std;

int main(void)
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int natNum = 0;
	cin >> natNum;
	int cnt = 2;

	if (natNum == 1)
		return 0;

	while (natNum > 1)
	{
		if (natNum % cnt == 0)
		{
			cout << cnt << endl;
			natNum /= cnt;
		}
		else
			cnt++;
	}
	return 0;
}