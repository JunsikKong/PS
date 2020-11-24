#include <iostream>

using namespace std;

int Baekjoon2522(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	
	cin >> n;

	for (int y = 1; y <= n * 2 - 1; y++) {
		for (int x = 1; x <= n; x++) {
			if (y > n) {
				if (x > y - n) {
					cout << '*';
				}
				else {
					cout << ' ';
				}
			}
			else {
				if (x > n - y) {
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