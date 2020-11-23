#include <iostream>
#include <cmath>

using namespace std;

int Baekjoon1748(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, m, cnt, t, result;

	cnt = 0;
	t = 0;

	cin >> n;

	m = n;

	while (m >= 10) {
		m /= 10;
		cnt++;
	}

	m = n - pow(10, cnt);

	for (int i = 1; i <= cnt; i++) {
		t += 9 * i * pow(10, i - 1);
	}
	
	cout << (m + 1) * (cnt + 1) + t << '\n';

	return 0;
}