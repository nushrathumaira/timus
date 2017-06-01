#include"stdafx.h"
#include <iostream>
#include <math.h>

using namespace std;

/*

int main() {

	__int64 n;
	cin >> n;
	__int64 *input_list = new __int64[n];
	//__int64 *primes = new __int64[15000];

	long int primes[20000] = { 0 };

	

	for (int i = 0; i < n; i++) {
		cin >> input_list[i];
	}




	long int a[200000] = { 0 };
	

	for (long int i = 2; i <= 200000; i++) {

		if (a[i] == 0) {
			for (long int j = i * i; j < 200000; j +=i) {
				a[j] = 1;
			}
		}
		//cout << a[i] << ends;
	}

	for (long int i = 2, p=0; i <= 200000; i++) {
		if (a[i] == 0) {
			//cout << i << ends;
			primes[p] = i;
			p++;
		}
		else {
			continue;
		}
	}

	for (int i = 0; i < n; i++)
		cout << primes[input_list[i] - 1] << endl;

	return 0;
}

*/



// solution 1

/*
for (long int i = 2, c = 0; c < n; i++){  */
/*
if (isPrimeN(i)) {
primes[c] = i;
c++;
}
*/

/*
for (int j = 2; j < i; ++j)
{
if (i  % j == 0)
{
continue;
}
else {
primes[c] = i;
c++;
}
}
}

for (int i = 0; i < n; i++)
cout << primes[input_list[i] - 1] << endl;

*/

// end of solution 1