#include <iostream>
using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n = 0;

	cin >> n;
	for (int i = 0; i < n; i++)
		cout << i + 1 << "\n";

	return 0;
}