#include <iostream>

using namespace std;

int Baekjoon10818(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, m, min, max;

	cin >> n >> m;

	min = m;
	max = m;

	while (n-- > 1) {
		cin >> m;
		if (min > m) min = m;
		if (max < m) max = m;
	}

	cout << min << ' ' << max << '\n';

	return 0;
}