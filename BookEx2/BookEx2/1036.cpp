#include"stdafx.h"
#include<iostream>


using namespace std;

/*


int main() {

	int n, sum;
	cin >> n >> sum;

	long long ans;

	unsigned long long int dp[64][1024];

	for (int i = 0; i < 64; i++) {
		for (int j = 0; j < 1024; j++) {
			dp[i][j] = 0;
		}
	}
	dp[0][0] = 1;
	if (n == 0 && sum == 0) {
		cout << 1;
		return 0;
	}
	if (sum % 2 == 1) {
		cout << 0;     // we can't divide sum in two parts equally
		return 0;
	}
	if (sum / 2 > n * 9) {
		cout << 0;  // if we put 9 in all positions we can't make sum / 2
		return 0;
	}

	for (int i = 1; i < 64;i++) {
		for (int s = 0; s < 1024; s++) {
			for (int j = 0; j <= 9; j++) {
				if (s - j >= 0)
					dp[i][s] += dp[i - 1][s - j];
			}
		}
	}
	
	cout << dp[n][sum / 2] * dp[n][sum / 2];
	
//	This is a Dynamic Programming problem, state of our dp is : dp[i][sum] which means we are on digit i and we want to make sum, how do we do that? We have to find sub-problems related to this state.
//dp[i][sum] = SUM{ dp[i-1][sum-k] for k = 0...9, st sum-k >= 0 } 

//another way to explain:

//f(n, m) = f(n-1, m) + f(n-1, m-1) + f(n-1, m-2) + ... + f(n-1, m-9). Here, 0, 1, 2, .. 9 are all possible options for the last digit of the given number. If last digit is k, then the rest is (n-1)-long number with sum of digits m - k


// The base case is that we know dp[0][0] = 1, which means there is one way to make sum of zero with zero digits, and that is nothing! :) ( like combination(0, n) = 1 )
	
	

	return 0;
}

*/
