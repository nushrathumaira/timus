#include"stdafx.h"
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


// stern brocot sequence
int f(int n) {

	if (n < 2) return n;
	else if (n & 1) return f(n / 2) +f(n/2 + 1);
	else return f(n / 2);
}

/*

int main() {

	


	unsigned int i, v[100000];
	v[0] = 0;
	v[1] = 1;
	for (i = 2; i<100000; i++) {
		if (i % 2 == 0) v[i] = v[i / 2];
		else v[i] = v[(i - 1) / 2] + v[(i - 1) / 2 + 1];
	}
	unsigned int n;

	while (cin >> a[b]) {
		if (a[b] == 0) break;
		b++;
	}
	int j = 0;
	while(a[j]!=0) {
		int n = a[j];
		{
			int max = *max_element(v, v + n + 1);
			cout << max << endl;
		}
		j++;
	}
	
	
	return 0;
}

*/