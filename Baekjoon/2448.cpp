#include <iostream>

using namespace std;

char star(int x, int y, int n);

int Baekjoon2448(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	
	cin >> n;

	for (int y = 1; y <= n; y++) {
		for (int x = 1; x <= 2 * n; x++) {
			cout << star(x, y, n);
		}
		cout << '\n';
	}

	return 0;
}

char star(int x, int y, int n) {
	if (n == 3) {
		if (x > n - y && x < n + y && (x != 3 || y != 2)) {
			return '*';
		}
		else {
			return ' ';
		}
	}
	else {
		if (y <= n / 2 && x > n - y && x < n + y) {
			return star(x - n / 2, y, n / 2);
		}
		else if (y > n / 2 && x > n - y && x < y) {
			return star(x, y - n / 2, n / 2);
		}
		else if (y > n / 2 && x > 2 * n - y && x < n + y) {
			return star(x - n, y - n / 2, n / 2);
		}
		else {
			return ' ';
		}
	}
}