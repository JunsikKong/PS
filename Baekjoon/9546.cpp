#include <iostream>

using namespace std;

int Baekjoon9546(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, k, result;

	cin >> n;

	while (n-- > 0) {
		cin >> k;
		result = 0;
		while (k-- > 0) {
			result = 2 * result + 1;
		}
		cout << result << '\n';
	}

	return 0;
}