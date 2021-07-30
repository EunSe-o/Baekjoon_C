#include <iostream>
using namespace std;

int main(void)
{
	int t_case = 0;
	int max = 0, min = 0;

	cin >> t_case;
	int* intArr = new int[t_case];

	for (int pushInt = 0; pushInt < t_case; pushInt++)
		cin >> intArr[pushInt];

	max = intArr[0];
	min = intArr[0];
	for (int searchInt = 1; searchInt < t_case; searchInt++)
	{
		if (intArr[searchInt] > max)
			max = intArr[searchInt];
		if (intArr[searchInt] < min)
			min = intArr[searchInt];
	}

	cout << min << " " << max;

	return 0;
}