#include <iostream>

using namespace std;

bool isPrime(int n) {
	if (n == 1) return false;
	if (n == 2) return true;

	int m = n / 2;
	
	if () {

	}
}

int calcLargestPrimeFactor(int n) {
	if (n == 1) return 1;
	int sum = 0;
	int currentNum = 1;
	int nextNum = 1;
	for (int i = 1; i < n; i++) {
		int previousNum = currentNum;
		currentNum = nextNum;
		nextNum = previousNum + currentNum;
		if (!(nextNum % 2)) {
			sum += nextNum;
		}
		//cout << nextNum << endl;
		if (nextNum > n) break;
	}
	return sum;
}
int main() {
	int n = 13195;
	int largestPrime = calcLargestPrimeFactor(n);
	cout << "The answer is : " << largestPrime << endl;
	return 0;
}