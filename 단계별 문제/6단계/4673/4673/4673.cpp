#include <iostream>
#include <vector>
using namespace std;

void selfNumber();

int main(void)
{
	selfNumber();

	return 0;
}

void selfNumber()
{
	bool check[10001] = { true, false };
	int trOrFal = 0;

	for (int index = 1; index < 10001; index++)
	{
		if (0 < index && index < 10)
		{
			trOrFal = index + index % 10;
			check[trOrFal] = true;
			continue;
		}
		else if (10 <= index && index < 100)
		{
			trOrFal = index + index / 10 + index % 10;
			check[trOrFal] = true;
			continue;
		}
		else if (100 <= index && index < 1000)
		{
			trOrFal = index + index / 100 + (index / 10) % 10
				+ index % 10;
			check[trOrFal] = true;
			continue;
		}
		else if (1000 <= index && index < 10000)
		{
			trOrFal = index + index / 1000 + (index / 100) % 10
				+ (index / 10) % 10 + index % 10;
			if (trOrFal > 9999)
				continue;
			check[trOrFal] = true;
			continue;
		}
		else if (index == 10000)
			check[index] = true;
	}

	for (int prtSelfNum = 1; prtSelfNum < 10001; prtSelfNum++)
	{
		if (check[prtSelfNum] == false)
			cout << prtSelfNum << endl;
	}

}