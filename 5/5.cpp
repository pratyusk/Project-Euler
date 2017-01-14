#include <iostream>

using namespace std;

int calculateSmallestDivisibleNum(int n) {
	if (n == 1) return 1;
	if (n == 2) return 2;
	int num = 3;
	bool found = true;
	for (int i = 1; i <= n; i++) {
		found = true;
		if (num % i) {
			num++;
			found = false;
			i = 1;
		}
		if (i == n && found) break;
	}
	return num;
}
int main() {
	int n = 20;
	int num = calculateSmallestDivisibleNum(n);
	cout << "The answer is : " << num << endl;
	return 0;
}