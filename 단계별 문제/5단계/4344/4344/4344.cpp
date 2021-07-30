#include <iostream>
using namespace std;

int main(void)
{
	int testCase = 0, numOfStudent = 0, cnt=0;
	double averScore = 0;
	cin >> testCase;

	int** studentScore = new int* [testCase];
	double* rateOfStudent = new double[testCase];
	for (int indexStd = 0; indexStd < testCase; indexStd++)
	{
		cin >> numOfStudent;
		studentScore[indexStd] = new int[numOfStudent];

		for (int inputData = 0; inputData < numOfStudent; inputData++)
		{
			cin >> studentScore[indexStd][inputData];
		}
		
		averScore = 0;
		for (int scoreSum = 0; scoreSum < numOfStudent; scoreSum++)
		{
			averScore += studentScore[indexStd][scoreSum];
		}
		averScore /= (double)numOfStudent;

		for (int searchScore = 0; searchScore < numOfStudent; searchScore++)
		{
			if (studentScore[indexStd][searchScore] > averScore)
				cnt++;
		}
		rateOfStudent[indexStd] = ((double)cnt / (double)numOfStudent) * 100;

		cnt = 0;
	}

	cout<<fixed;
	cout.precision(3);
	cout<<showpoint;
	for (int printRate = 0; printRate < testCase; printRate++)
	{
		if(rateOfStudent)
		cout << rateOfStudent[printRate]<<"%"<<endl;
	}

	return 0;
}