#include <iostream>
using namespace std;

int main(void)
{
	int hour = 0, min = 0;

	cin >> hour >> min;
	min -= 45;

	if (min < 0)
	{
		hour--;
		min += 60;
	}
	if (hour < 0)
		hour += 24;

	cout << hour << " " << min << endl;

	return 0;
}