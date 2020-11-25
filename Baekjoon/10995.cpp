#include <iostream>

using namespace std;

int Baekjoon10995(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	
	cin >> n;

	for (int y = 1; y <= n; y++) {
		for (int x = 1; x <= 2 * n - y % 2; x++) {
			if ((x + y) % 2) {
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