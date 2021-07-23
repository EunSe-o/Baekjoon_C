#include <iostream>
using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int t_case = 0, a = 0, b = 0;

	cin >> t_case;
	for (int i = 0; i < t_case; i++)
	{
		cin >> a >> b;
		printf("%d\n", a + b);
	}

	return 0;
}