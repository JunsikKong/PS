#include <iostream>

using namespace std;

int Baekjoon2442(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	
	cin >> n;

	for (int y = 1; y <= n; y++) {
		for (int x = 1; x <= n + y - 1; x++) {
			if (x <= n - y) {
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