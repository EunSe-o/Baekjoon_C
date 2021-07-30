#include <iostream>
using namespace std;

int main(void)
{
	int howManySubject = 0;
	int max = 0;
	double average = 0;

	cin >> howManySubject;
	double* subjectScore = new double[howManySubject];

	for (int inputData = 0; inputData < howManySubject; inputData++)
	{
		cin >> subjectScore[inputData];
		if (subjectScore[inputData] > max)
			max = subjectScore[inputData];
	}

	for (int modifyScore = 0; modifyScore < howManySubject; modifyScore++)
	{
		subjectScore[modifyScore] 
			= (subjectScore[modifyScore] / (double)max) * 100;
		average += subjectScore[modifyScore];
	}

	cout.precision(10);
	cout << average / (double)howManySubject;


	return 0;
}