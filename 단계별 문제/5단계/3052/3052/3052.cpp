#include <iostream>
using namespace std;

int main(void)
{
	int pushNum[10] = { 0 };
	int divNum[10] = { 0 };
	int cnt = 1;

	for (int index = 0; index < 10; index++)
		cin >> pushNum[index];

	for (int divTheNum = 0; divTheNum < 10; divTheNum++)
		divNum[divTheNum] = pushNum[divTheNum] % 42;
	
	for (int searchNum = 1; searchNum < 10; searchNum++)
	{
		for (int index = 0; index < searchNum; index++)
		{
			if (divNum[searchNum] == divNum[index])
				break;
			if (index == searchNum - 1)
				cnt++;
		}
		
	}
	cout << cnt;

	return 0;
}