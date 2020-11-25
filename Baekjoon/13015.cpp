#include <iostream>

using namespace std;

int Baekjoon13015(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, mx, my, flag;

	cin >> n;

	my = 2 * n - 1;

	for (int y = 1; y <= my; y++) {
		if (n > y) flag = 1;
		else flag = -1;

		mx = 3 * n - 2 + flag * (n - y);
		for (int x = 1; x <= mx; x++)
			if (((y == my || y == 1) && ((1 <= x && x <= n) || (mx - n < x && x <= mx))) ||
				(x == mx) || (x == 4 * n - 2 - mx) || (x == n + y - 1) || (x == 3 * n - 1 - y))
				cout << '*';
			else cout << ' ';
		cout << "\n";
	}

	return 0;
}