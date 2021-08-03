#include <iostream>
using namespace std;

int main(void)
{
	int x = 0, y = 0, w = 0, h = 0;
	cin >> x >> y >> w >> h;
	int lengX = w - x, lengY = h - y;

	if (lengX > x)
		lengX = x;
	if (lengY > y)
		lengY = y;

	if (lengX > lengY)
		cout << lengY;
	else if (lengX == lengY)
		cout << lengX;
	else if (lengX < lengY)
		cout << lengX;

	return 0;
}