#include <iostream>

using namespace std;

int Baekjoon1057(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int a, b, n, m, result;

	result = 0;

	cin >> n >> a >> b;

	while (n != 1) {
		m = n % 2;
		n = n / 2 + m;
		result++;
		if (a % 2 == b - a || b % 2 == a - b) {
			break;
		}
		else {
			a = (a + 1) / 2;
			b = (b + 1) / 2;
		}
	}

	cout << result << '\n';

	return 0;
}