#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;

__int64 is_perfect_square(__int64 x) {

	/*
	int rootVal = 8 * p - 7
	if (n < 0)
		return false;
	int root = round(sqrt(n));
	return (n == root * root) || (n == (root + 1) * (root + 1));
	*/
	double a = 1, b = 1, c = -2 * x + 2;
	double d = b * b - 4 * a * c;
	double p = (-b + sqrt(d)) / 2 * a;

	return (p - (long)p) > 0 ? 0 : 1;

}
/*
int main() {

	long long int n;

	cin >> n;
	

	__int64 *inArray = new __int64[65535];
	__int64 *outArray = new __int64[65535];
	
	for (int i = 0; i < n; i++) {
		__int64 p;
		cin >> p;
		

		outArray[i] =  is_perfect_square(p);
		 
	}
	for (int i = 0; i < n; i++) {
		cout << outArray[i];
		cout << " ";
	}
	
	
	return 0;
}

*/ // end main