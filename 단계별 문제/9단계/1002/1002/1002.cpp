#include <iostream>
using namespace std;

int main(void)
{
	int tCase = 0;
	cin >> tCase;

	for (int again = 0; again < tCase; again++)
	{
		int jo[2] = { 0 };
		int beak[2] = { 0 };
		int ryu[2] = { 0 };
		int ryuDis[2] = { 0 };

		cin >> jo[0] >> jo[1] >> ryuDis[0] >> beak[0] >> beak[1] >> ryuDis[1];
		
		ryu[0] = ryuDis[0] * ryuDis[0] + jo[0] * jo[1];
		ryu[1] = ryuDis[1] * ryuDis[1] + beak[0] * beak[1];

		if (ryu[0])
			cout << "-1" << endl;
	}

	return 0;
}