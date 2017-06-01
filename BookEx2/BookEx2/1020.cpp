#include"stdafx.h"
#include<iostream>
#include<math.h>


using namespace std;

double edge_length(double x1, double y1, double x2, double y2) {
	return sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
}
/*
int main() {

	//const long double pi = 3.1415926535897932384626433832795;
	const double pi = acos(-1.);
	int n;
	//scanf_s("%df %df",&n,&r);
	double sum = 0,r = 0.0;
	cin >> n >> r;

	double coords[101][2];

	if (n == 1) {
		printf("%.2lf", (2 * pi * r));
		return 0;
	}

	for (int i = 0; i < n; ++i) {
		cin >> coords[i][0] >> coords[i][1];
		
	}
	sum += edge_length(coords[0][0], coords[n - 1][0], coords[0][1], coords[n - 1][1]) + (pi * r * 2);
	for (int i = 1; i < n; ++i) {
		sum += edge_length(coords[i][0], coords[i - 1][0], coords[i][1], coords[i -1][1]);
	}
	

	//cout << sum;
	printf("%.2lf", sum);
	return 0;

}
*/