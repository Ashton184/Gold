#include <iostream>

/* 
 * gold.cpp
 * Ashton Tran
 * August 25, 2025
 *
 * This program reads a "map" on standard input, it reads each characters from the input, then decides what the values of the character, adds them all up and prints the sum of golds.
 * */

using namespace std;

int main() {
	char goldrock;
	int totalgold = 0;

	while (cin >> goldrock) {
		if (goldrock >= 'A' && goldrock <= 'Z') {
			totalgold += goldrock - 'A' + 1;
		}
	}
	
	cout << totalgold << endl;
	return totalgold;
