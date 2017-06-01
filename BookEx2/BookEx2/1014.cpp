#include"stdafx.h"
#include<iostream>
#include<set>
using namespace std;

/*

int main() {

	multiset<int> digits;
	long int N;
	cin >> N;

	if (N == 0) {
		cout << 10;  // because 1 * 0 = 0 when N= 0 AND it is lowest of 10,20,30
		return 0;
	}
	if (N == 1){
		cout << 1;
		return 0;
	}
	
	
	
	
	for (int i = 9; i >= 2; i--) {

			while(N % i == 0) {
				digits.insert(i);
				N /= i;
			}
		}
	
	if (N > 1) {
		cout << -1;   // no such digits exist
		return 0;
	}
	else {
		for (multiset<int>::iterator it = digits.begin(); it != digits.end(); it++)
			cout << *it;
		return 0;
	}

	
	
	return 0;

}

*/