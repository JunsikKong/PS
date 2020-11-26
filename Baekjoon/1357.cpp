#include <iostream>

using namespace std;

int rev1357(int n);

int Baekjoon1357(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int x, y, result;

	result = 0;

	cin >> x >> y;

	result = rev1357(x) + rev1357(y);
	result = rev1357(result);

	cout << result << '\n';

	return 0;
}

int rev1357(int n) {
	int result;
	result = 0;

	while (n > 0) {
		result = result * 10 + n % 10;
		n /= 10;
	}

	return result;
}