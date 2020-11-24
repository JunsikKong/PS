#include <iostream>

using namespace std;

int Baekjoon2523(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	
	cin >> n;

	for (int y = 1; y <= n * 2 - 1; y++) {
		int mx;

		if (y > n) {
			mx = 2 * n - y;
		}
		else {
			mx = y;
		}

		for (int x = 1; x <= mx; x++) {
			cout << '*';
		}
		cout << '\n';
	}

	return 0;
}