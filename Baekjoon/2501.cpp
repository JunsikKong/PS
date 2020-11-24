#include <iostream>

using namespace std;

int Baekjoon2501(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, k;
	
	cin >> n >> k;

	for (int i = 1; i <= n / 2; i++) {
		if (n % i == 0) {
			k--;
		}
		if (k == 0) {
			cout << i;
			break;
		}
	}
	if (k == 1) {
		cout << n;
	}
	else if (k > 1) {
		cout << 0;
	}
	cout << '\n';

	return 0;
}