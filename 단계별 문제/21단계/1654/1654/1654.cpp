#include <iostream>
using namespace std;

void MakeLine(int already, int need, int* leng)
{

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