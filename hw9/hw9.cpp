#define _CRT_SECURE_NO_WARNINGS

#define MIN(a,b) ((a)<(b)?(a):(b))
#define MAX(a,b) ((a)>(b)?(a):(b))
#define SQR(a) ((a)*(a))
#define POW(a,b) (pow(a,b))
#define EVEN(a) ((a)%2==0)
#define ODD(a) ((a)%2!=0)

#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <iomanip>
#include <conio.h>
#include <string>
#include <string.h>
#include <ctype.h>
using namespace std;
int main()
{
	int a = 5, b = 10;
	cout << "MIN(a,b) = " << MIN(a, b) << endl;
	cout << "MAX(a,b) = " << MAX(a, b) << endl;
	cout << "SQR(a) = " << SQR(a) << endl;
	cout << "POW(a,b) = " << POW(a, b) << endl;
	cout << "EVEN(a) = " << EVEN(a) << endl;
	cout << "ODD(a) = " << ODD(a) << endl;
	return 0;
}