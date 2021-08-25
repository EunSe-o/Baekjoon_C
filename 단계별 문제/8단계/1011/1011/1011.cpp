#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	int tCase = 0;
	cin >> tCase;

	for (int inputData = 0; inputData < tCase; inputData++)
	{
		int cnt = 0;
		int now = 0, arr = 0;
		cin >> now >> arr;
		int dis = arr - now;
		int move = 1;

		while (dis > move * 2)
		{
			dis -= move * 2;
			move++;
			cnt += 2;
		}

		if (dis <= move)
			cnt++;
		else if (dis > move)
			cnt += 2;

		cout << cnt << endl;
	}

	return 0;
}