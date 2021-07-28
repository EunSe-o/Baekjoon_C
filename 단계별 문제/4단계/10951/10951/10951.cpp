#include <iostream>
using namespace std;

int main(void)
{
	int a = 0, b = 0;
	while (1)
	{
		cin >> a >> b;
		if (cin.eof() == true)
			return 0;
		cout << a + b << endl;
	}

	return 0;
}