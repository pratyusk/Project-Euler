#include <iostream>

using namespace std;

int calculateMultipleSum(int n) {
	int sum = 0;
	for (int i = 1; i < n; i++) {
		if (!(i % 3) || !(i % 5)) {
			sum += i;
		}
	}
	return sum;
}
int main() {
	int n = 1000;
	int prod = calculateMultipleSum(n);
	cout << "The answer is : " << prod << endl;
	return 0;
}