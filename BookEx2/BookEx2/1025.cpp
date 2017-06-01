#include"stdafx.h"
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

/*
int main() {

	int k;
	cin >> k;

	int minimum = 0;
	size_t sizeG = k;
	std::vector<int> groups;

	

	for (int i = 0; i < sizeG; i++) {

		int g;
		cin >> g;
		groups.insert(std::upper_bound(groups.begin(), groups.end(), g), g);
	}
		
	for (int i = 0; i < (groups.size()/2) + 1; i++) {
		minimum += int(groups.at(i)/2) + 1;
		
	}
	cout << minimum;

	return 0;
}



/*typedef std::vector<int> ints;

//void insert( ints &cont, int value ) {
ints::iterator it = std::lower_bound( cont.begin(), cont.end(), value, std::greater<int>() ); // find proper position in descending order
cont.insert( it, value ); // insert before iterator it
}*/


