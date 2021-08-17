#include <iostream>

using namespace std;

char star(int x, int y, int mx, int my, int n);

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, mx, my;

	cin >> n;

	mx = 1 + (n - 1) * 4;
	if (mx == 1) my = mx;
	else my = mx + 2;

	for (int y = 1; y <= my; y++) {
		for (int x = 1; x <= mx; x++) {
			cout << star(x, y, mx, my, n);
			if (y == 2) break;
		}
		cout << '\n';
	}

	return 0;
}


char star(int x, int y, int mx, int my, int n) {
	for (int i = 0; i < n - 1; i++) {
		int p = i * 2;
		if ((1 + p <= x && x <= mx - p + 2 && 1 + p == y) ||
			(1 + p == x && 1 + p <= y && y <= my - p) ||
			(1 + p <= x && x <= mx - p && y == my - p) ||
			(x == mx - p && 3 + p <= y && y <= my - p)) return '*';
	}
	if ((2 * n - 1 <= x && x <= 2 * n + 1 && y == 2 * n - 1) ||
		(x == 2 * n - 1 && 2 * n - 1 <= y && y <= 2 * n + 1)) return '*';
	else return ' ';
}