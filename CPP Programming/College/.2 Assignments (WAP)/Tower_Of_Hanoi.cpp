/* Program to print instructions for solving tower of Hanoi in C++ using recursion.
Steps:
1) Move top (n - 1) disks from start to mid rod
2) Move last one disk from start to end rod
3) Move top (n - 1) disks from mid to end rod
Execute the above steps recursively. */
#include <iostream>
#include <cmath>
using namespace std;

void printInstruction(int num, char start, char finish, char mid)
{
	if (num == 0) // Base condition to finish recursion
	{
		return;
	}
	else
	{
		// Step 1
		printInstruction((num - 1), start, mid, finish);
		// Step 2
		cout << "Move disk " << num << " from " << start << " to " << finish << endl;
		// Step 3
		printInstruction((num - 1), mid, finish, start);
	}
}

int main()
{
	int number;
	cout << "Enter the number of disks: ";
	cin >> number;
	printInstruction(number, 'A', 'C', 'B'); // A, B and C are rods
	// Number of steps is always (2^n) - 1
	cout << "Total number of steps: " << (pow(2, number) - 1) << endl;
	return 0;
}