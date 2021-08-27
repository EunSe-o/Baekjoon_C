#include <iostream>
using namespace std;

void MakeLine(int already, int need, int* leng)
{
	int sum = 0, shortest = leng[0];
	for (int search = 0; search < already; search++)
	{
		sum += leng[search];
		if (leng[search] < shortest)
			shortest = leng[search];
	}

	int cnt = 0;
	for (int cut = sum / need; cut <= sum / need; cut--)
	{
		cnt = 0;
		for (int index = 0; index < already; index++)
		{
			cnt += leng[index] / cut;
		}

		if (cnt == need)
		{
			cout << cut;
			break;
		}
	}
}

int main(void)
{
	int already = 0, need = 0;
	cin >> already >> need;

	int* leng = new int[already];
	for (int inputData = 0; inputData < already; inputData++)
		cin >> leng[inputData];

	MakeLine(already, need, leng);

	return 0;
}