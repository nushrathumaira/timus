#include"stdafx.h"
#include <iostream>


using namespace std;


int dp(int n, int k) {
   
	if (n == 1) return k < 10 ? 1 : 0;

	int sum = 0;
	for (int i = 0; i <= 9 && k - i >= 0; i++) {
		sum += dp(n - 1, k - i);
	}
	return sum;
}
/*
int main() {

	int n,sum = 0,temp;
	cin >> n;

	n /= 2;

	for (int i = 0; i <= n * 9; i++) {
		temp = dp(n, i);
		sum += temp * temp;
	}
	cout << sum;
	return 0;
}

*/

