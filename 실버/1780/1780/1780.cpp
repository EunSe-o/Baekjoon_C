#include <iostream>
using namespace std;

int** matrix;
int countTimes[3] = { 0 };

bool check(int row, int col, int leng)
{
	for (int chkrow = row; chkrow < row + leng; chkrow++)
	{
		for (int chkcol = col; chkcol < col + leng; chkcol++)
		{
			if (matrix[row][col] != matrix[chkrow][chkcol])
				return false;
		}
	}

	if (matrix[row][col] == -1)
		countTimes[0]++;
	else if (matrix[row][col] == 0)
		countTimes[1]++;
	else if (matrix[row][col] == 1)
		countTimes[2]++;

	return true;
}

void Cut(int row, int col, int leng)
{
	if (check(row, col, leng) == false)
	{
		leng /= 3;
		for (int cutRow = 0; cutRow < 3; cutRow++)
		{
			for (int cutCol = 0; cutCol < 3; cutCol++)
			{
				Cut(row + leng * cutRow, col + leng * cutCol, leng);
			}
		}
	}
}

int main(void)
{
	int size = 0;

	cin >> size;
	matrix = new int* [size];

	for (int inputRow = 0; inputRow < size; inputRow++)
	{
		matrix[inputRow] = new int[size];
		for (int inputCol = 0; inputCol < size; inputCol++)
		{
			cin >> matrix[inputRow][inputCol];
		}
	}

		Cut(0, 0, size);

	cout << countTimes[0] << endl << countTimes[1] << endl << countTimes[2] << endl;
	return 0;
}