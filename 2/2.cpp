#include <iostream>

using namespace std;

int calculateEvenFibonacci(int n) {
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
	int n = 4000000;
	int sum = calculateEvenFibonacci(n);
	cout << "The answer is : " << sum << endl;
	return 0;
}