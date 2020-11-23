#include <iostream>

using namespace std;

int Baekjoon2443(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n;

	cin >> n;

	for (int y = 1; y <= n; y++) {
		for (int x = 1; x <= n * 2 - y; x++) {
			if (x < y) {
				cout << ' ';
			}
			else {
				cout << '*';
			}
		}
		cout << '\n';
	}

	return 0;
}