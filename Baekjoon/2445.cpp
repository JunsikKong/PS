#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, mx, my;

	cin >> n;

	my = n * 2 - 1;

	for (int y = 1; y <= my; y++) {
		mx = n * 2;
		for (int x = 1; x <= mx; x++) {
			if (y < n) {
				if (x <= y || n * 2 - y < x) {
					cout << '*';
				}
				else {
					cout << ' ';
				}
			}
			else {
				if (x <= 2 * n - y || x > y) {
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