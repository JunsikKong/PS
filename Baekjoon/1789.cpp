#include <iostream>

using namespace std;

int Baekjoon1789(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	long long int n, result, cnt;

	result = 1;
	cnt = 1;

	cin >> n;

	while (1) {
		if (cnt <= n && n < cnt + ++result) break;
		cnt += result;
	}

	result--;

	cout << result << '\n';

	return 0;
}