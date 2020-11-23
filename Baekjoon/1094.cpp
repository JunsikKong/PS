#include <iostream>
#include <cmath>

using namespace std;

int Baekjoon1094(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, result;

	result = 0;

	cin >> n;

	while (n != 0) {
		for (int i = 6; i >= 0; i--) {
			if (n >= pow(2, i)) {
				n -= pow(2, i);
				result++;
				break;
			}
		}
	}
	cout << result << '\n';

	return 0;
}