#include <iostream>

using namespace std;

int fibonacci10870(int n);

int Baekjoon10870(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n;

	cin >> n;

	cout << fibonacci10870(n) << '\n';

	return 0;
}

int fibonacci10870(int n) {
	if (n == 0) {
		return 0;
	}
	else if (n == 1) {
		return 1;
	}
	else {
		return fibonacci10870(n - 1) + fibonacci10870(n - 2);
	}
}