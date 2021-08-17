#include <iostream>

using namespace std;

int sumMan(int a, int b);

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int t, k, n;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> k >> n;
		cout << sumMan(k, n) << '\n';
	}

	return 0;
}

int sumMan(int a, int b) {
	int sum = 0;

	for (int i = 1; i <= b; i++) {
		if (a == 1) {
			sum += i;
		}
		else {
			sum += sumMan(a - 1, i);
		}
	}

	return sum;
}