#include <iostream>

using namespace std;

int Baekjoon8393(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, sum;
	sum = 0;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		sum += i;
	}

	cout << sum << '\n';

	return 0;
}