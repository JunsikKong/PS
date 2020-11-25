#include <iostream>

using namespace std;

int Baekjoon10996(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, mx, my;
	
	cin >> n;

	if (n == 1)	my = 1;
	else my = n * 2;

	for (int y = 1; y <= n * 2; y++) {
		mx = n + (n % 2 * 2 - 1) * (y % 2) - n % 2;
		for (int x = 1; x <= mx; x++) {
			if ((x + y) % 2) cout << ' ';
			else cout << '*';
		}
		cout << '\n';
	}

	return 0;
}