#include <iostream>
#include <vector>
using namespace std;

long long sum(vector<int>& a)
{
	long long result = 0;
	for (int index = 0; index < a.size(); index++)
	{
		result += a[index];
	}

	return result;
}