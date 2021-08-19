#include <iostream>
#include <algorithm>
using namespace std;

void CutTree(int* height, int tree, int takeHome)
{
	int left = 0, right = tree - 1;
	int mid = (left + right) / 2;
	int sum = 0;

	for (int cm = 0; sum != 7; cm++)
	{
		sum = 0;
		while (1)
		{
			if ()

		}
	}


}

int main(void)
{
	int tree = 0, takeHome = 0;
	cin >> tree >> takeHome;

	int* height = new int[tree];
	for (int inputData = 0; inputData < tree; inputData++)
		cin >> height[inputData];

	sort(height, height + tree);
	CutTree(height, tree, takeHome);

	return 0;
}