#include <iostream>
using namespace std;

int main(void)
{
	int t_case = 0, a = 0, b = 0;

	cin >> t_case;
	for (int i = 0; i < t_case;i++)
	{
		cin >> a >> b;
		cout << "Case #" << i + 1 << ": " << a + b << endl;
	}

	return 0;
}