#include <iostream>
#define PI (3.14159265359)
using namespace std;

int main(void) 
{
	double euclid = 0, taxicab = 0;
	double radius = 0;
	cin >> radius;

	// int x1 = 0, x2 = 0, y1 = 0, y2 = 0;
	euclid = PI * radius * radius;
	taxicab = 2 * radius * radius;

	printf("%.6lf\n%.6lf", euclid, taxicab);

	return 0;
}