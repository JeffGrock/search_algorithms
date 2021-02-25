// Linear Search Algorithm


#include <iostream>
#include <string> 
using namespace std;

// Linearly search x in arr[]. If x is present then return its location, otherwise return -1 
int search(int numArray[], int numSize, int searchKey) {

	int i;
	for (i = 0; i < numSize; i++) {
		if (numArray[i] == searchKey) {
			return i;
		}
	}

	return -1;		// not found
}

// Driver code 
int main() {

	int numArray[] = { 1, 7, 14, 17, 19, 22, 28, 35, 38, 41, 57, 68, 76, 85, 90 };
	int const numSize = sizeof(numArray) / sizeof(numArray[0]);
	int searchKey = 40;

	cout << "List of numbers to search through: \n";
	for (int i = 0; i < numSize; i++) {
		cout << "\t" << numArray[i];
	}

	int searchIndex = search(numArray, numSize, searchKey);
	if (searchIndex == -1) {
		cout << "\nThe Search Key " << searchKey << " is not present in the array";
	}
	else {
		cout << "\nThe Search Key " << searchKey << " found at position " << searchIndex;
	}

}

/* sample output
List of numbers to search through:
		1       7       14      17      19      22      28      35      38      41      57      68      76      85     90
The Search Key 26 is not present in the array

List of numbers to search through:
		1       7       14      17      19      22      28      35      38      41      57      68      76      85     90
The Search Key 40 is not present in the array

*/