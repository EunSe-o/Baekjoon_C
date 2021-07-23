#include <iostream>
using namespace std;

int main(void)
{
	int cnt = 0, a = 0, b = 0;

	cin >> cnt;
	for (int i = 0; i < cnt; i++)
	{
		cin >> a >> b;
		cout << a + b << endl;
	}

	return 0;
}