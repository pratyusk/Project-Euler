#include <iostream>

using namespace std;

int calculateSmallestDivisibleNum(int n) {
	int squareSum = 0;
	int sumSquare = 0;
	for (int i = 1; i <= n; i++) {
		squareSum += i * i;
		sumSquare += i;
	}
	return (sumSquare * sumSquare) - squareSum;
}
int main() {
	int n = 100;
	int difference = calculateSmallestDivisibleNum(n);
	cout << "The answer is : " << difference << endl;
	return 0;
}