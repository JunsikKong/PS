#include <iostream>

using namespace std;

int max(int m, int n);
char star(int x, int y, int n);

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, my, mx;
	
	cin >> n;

	my = max(1, n);

	for (int y = 1; y <= my; y++) {
		if (n % 2) {
			mx = my + y - 1;
		}
		else {
			mx = my * 2 - y;
		}

		for (int x = 1; x <= mx; x++) {
			cout << star(x, y, n);
		}
		cout << '\n';
	}

	return 0;
}

int max(int m, int n) {
	if (n == 1) {
		return m;
	}
	else {
		return m + max(m * 2, n - 1);
	}
}

char star(int x, int y, int n) {
	int mid;

	if (n == 1) return '*';

	mid = max(1, n);

	if (n % 2) {
		if (x == mid - y + 1 || x == mid + y - 1 || y == mid) {
			return '*';
		}
		else if (x > mid - y + 1 && x < mid + y - 1 && y > mid / 2) {
			return star(x - (mid / 2 + 1), y - mid / 2, n - 1);
		}
		else return ' ';
	}
	else {
		if (x == y || x == mid * 2 - y || y == 1) {
			return '*';
		}
		else if (x > mid - (y - 1) && x < mid + (y - 1) && y <= mid / 2 + 1) {
			return star(x - (mid / 2 + 1), y - 1, n - 1);
		}
		else return ' ';
	}
}