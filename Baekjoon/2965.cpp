#include <iostream>

using namespace std;

int Baekjoon2965(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int a, b, c, result;

	cin >> a >> b >> c;

	if (c - b < b - a) {
		result = b - a - 1;
	}
	else {
		result = c - b - 1;
	}

	cout << result << '\n';

	return 0;
}