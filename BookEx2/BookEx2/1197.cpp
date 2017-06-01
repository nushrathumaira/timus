#include"stdafx.h"
#include<iostream>

using namespace std;


int main() {

	int N;
	cin >> N;

	char position[3];

	int attackCount[100];

	/*
	The statement of this problem is very simple: you are to determine how many squares of the chessboard can be attacked by a knight standing alone on the board. Recall that a knight moves two squares forward (horizontally or vertically in any direction) and then one square sideways (perpedicularly to the first direction). 
	*/

	// knight moves 1st hori/verti 2 squares and then 1 square perpendicular to the last move, one square
	// up or down or left or right
	// moves are paired from two arrays as (i,j)

	/*
	Ranks are rows that go from side to side across the chessboard and are referred to by numbers. Each chessboard has eight ranks, which are numbered from the bottom of the board (where the white pieces start) on up.
Files are columns that go up and down the chessboard, and each board has eight of them. Because numbers indicate ranks, letters indicate files, which are labeled from left to right.
The naming conventions for ranks and files allows you to give an identifier to every square by using what chess people call the file-first method. For example, the lower right-hand square is called h1. This name is shorthand for h-file, first rank.
	*/

	int rowMoveArray[] = { -2,-2,2,2,1,-1,1,-1 };
	int colMoveArray[] = { 1,-1,1,-1,-2,-2,2,2 };
	int attackIndex = 0;
	while (N--) {
		cin >> position;

		//cout << position[0] << endl;
		//cout << position[1] << endl;
		int r = (int)(position[1] - '1'), c = (int)(position[0] - 'a'), count =0;

		//cout << r << endl;
		//cout << c << endl;

		for (int i = 0; i < 8; i++) {

			int new_r = r + rowMoveArray[i];
			int new_c = c + colMoveArray[i];

			if (new_r >= 0 && new_r < 8 && new_c >= 0 && new_c < 8)
				count++;
		}

		//cout << r;
		//cout << c;
		//cout << count << endl;
		attackCount[attackIndex] = count;
		attackIndex++;
	}

	for (int i = 0; i < attackIndex; i++) {
		cout << attackCount[i] << endl;
	}

	return 0;
}