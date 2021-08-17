#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, mx, my;

	cin >> n;

	my = n * 2 - 1;

	for (int y = 1; y <= my; y++) {
		if (y < n) {
			mx = 2 * n - y;
		}
		else {
			mx = y;
		}

		for (int x = 1; x <= mx; x++) {
			if (y < n) {
				if (y <= x && x <= 2 * n - y) {
					cout << '*';
				}
				else {
					cout << ' ';
				}
			}
			else {
				if (y >= x && x >= 2 * n - y) {
					cout << '*';
				}
				else {
					cout << ' ';
				}
			}
		}
		cout << '\n';
	}

	return 0;
}