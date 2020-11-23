#include <iostream>

using namespace std;

int fiv(int x);

int Baekjoon1003(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int m;
		cin >> m;
		if (m != 0) {
			cout << fiv(m - 1);
		}
		else {
			cout << 1;
		}
		cout << " " << fiv(m) << '\n';
	}

	return 0;
}

int fiv(int x) {
	int a, b, swp, result;
	a = 0;
	b = 1;
	if (x == 0) {
		return 0;
	}
	else if (x == 1) {
		return 1;
	}
	else {
		for (int i = 2; i <= x; i++) {
			result = a + b;
			a = b;
			b = result;
		}
		return result;
	}
}