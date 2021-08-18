#include <iostream>
using namespace std;

int Move(int *disc)
{


	
}

int main(void)
{
	int discNum = 0;
	cin >> discNum;


	int* disc = new int[discNum+1];
	for (int index = 0; index <= discNum; index++)
		disc[index] = index;

	Move(disc);

	return 0;
}