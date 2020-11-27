#include <iostream>
#include <cmath>

using namespace std;

int Baekjoon1789_2(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	long long int n, result;

	cin >> n;

	result = int((-1 + sqrt(1 + 8 * n)) / 2);

	cout << result << '\n';

	return 0;
}