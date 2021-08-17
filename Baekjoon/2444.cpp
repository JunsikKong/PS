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
			mx = n + y - 1;
		}
		else {
			mx = my - y + n;
		}

		for (int x = 1; x <= mx; x++) {
			if (y < n) {
				if (x <= n - y) {
					cout << ' ';
				}
				else {
					cout << '*';
				}
			}
			else {
				if (x <= y - n) {
					cout << ' ';
				}
				else {
					cout << '*';
				}
			}
		}
		cout << '\n';
	}

	return 0;
}