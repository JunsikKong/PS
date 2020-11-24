#include <iostream>

using namespace std;

int Baekjoon5532(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int l, a, b, c, d, x, y, result;
	
	cin >> l >> a >> b >> c >> d;

	if (a % c > 0) {
		x = 1;
	}
	else {
		x = 0;
	}

	if (b % d > 0) {
		y = 1;
	}
	else {
		y = 0;
	}

	if (a / c > b / d) {
		result = l - (a / c + x);
	}
	else {
		result = l - (b / d + y);
	}

	cout << result << '\n';

	return 0;
}