#include <iostream>

using namespace std;

int Baekjoon2010(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, result;

	result = 1;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int m;
		cin >> m;
		result += m - 1;
	}

	cout << result << '\n';

	return 0;
}