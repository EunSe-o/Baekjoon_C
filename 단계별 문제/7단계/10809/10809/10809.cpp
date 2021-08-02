#include <iostream>
using namespace std;

int main(void)
{
	char inputArr[100] = { 0 };
	bool check = false;

	cin >> inputArr;
	for (int cntAlp = 97; cntAlp < 123; cntAlp++)
	{
		for (int searchArr = 0; inputArr[searchArr] != 0; searchArr++)
		{
			if (cntAlp == inputArr[searchArr])
			{
				cout << searchArr << " ";
				check = true;
				break;
			}
		}

		if (check == false)
			cout << "-1 ";
		check = false;
	}


	return 0;
}