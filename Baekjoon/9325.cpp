#include <iostream>

using namespace std;

int Baekjoon9325(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int t, s, n, q, p, result;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> s >> n;
		result = s;
		for (int j = 0; j < n; j++) {
			cin >> q >> p;
			result += q * p;
		}
		cout << result << '\n';
	}
	cout << '\n';

	return 0;
}