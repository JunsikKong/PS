#include <iostream>

using namespace std;

int Baekjoon1712(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	long long int a, b, c, result;
	result = 0;

	cin >> a >> b >> c;

	if (c - b <= 0) {
		result = -1;
	}
	else {
		result = a / (c - b) + 1;
	}

	cout << result << '\n';

	return 0;
}