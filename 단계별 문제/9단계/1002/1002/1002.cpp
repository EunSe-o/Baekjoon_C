#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	int tCase = 0;
	cin >> tCase;

	for (int again = 0; again < tCase; again++)
	{
		int x1, y1, r1, x2, y2, r2;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		int dis = (int)pow(x2 - x1, 2) + (int)pow(y2 - y1, 2);

		if (dis == 0 && r1 == r2)
			cout << "-1" << endl;

		else if (dis < pow(r1 + r2, 2) && pow(r1 - r2, 2) < dis)
			cout << "2" << endl;

		else if (dis == pow(r1 + r2, 2) || dis == pow(r1 - r2, 2))
			cout << "1" << endl;

		else
			cout << "0" << endl;
	}

	return 0;

}