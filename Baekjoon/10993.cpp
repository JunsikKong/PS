#include <iostream>

using namespace std;

int max10993(int m, int n);
char star10993(int x, int y, int n);

int Baekjoon10993(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, my, mx;
	
	cin >> n;

	my = max10993(1, n);

	for (int y = 1; y <= my; y++) {
		if (n % 2) {
			mx = my + y - 1;
		}
		else {
			mx = my * 2 - y;
		}

		for (int x = 1; x <= mx; x++) {
			cout << star10993(x, y, n);
		}
		cout << '\n';
	}

	return 0;
}

int max10993(int m, int n) {
	if (n == 1) {
		return m;
	}
	else {
		return m + max10993(m * 2, n - 1);
	}
}

char star10993(int x, int y, int n) {
	int mid;

	if (n == 1) return '*';

	mid = max10993(1, n);

	if (n % 2) {
		if (x == mid - y + 1 || x == mid + y - 1 || y == mid) {
			return '*';
		}
		else if (x > mid - y + 1 && x < mid + y - 1 && y > mid / 2) {
			return star10993(x - (mid / 2 + 1), y - mid / 2, n - 1);
		}
		else return ' ';
	}
	else {
		if (x == y || x == mid * 2 - y || y == 1) {
			return '*';
		}
		else if (x > mid - (y - 1) && x < mid + (y - 1) && y <= mid / 2 + 1) {
			return star10993(x - (mid / 2 + 1), y - 1, n - 1);
		}
		else return ' ';
	}
}