#include <iostream>

using namespace std;

int Baekjoon2576(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n[7], min, sum;
	min = 0;
	sum = 0;

	for (int i = 0; i < 7; i++) {
		cin >> n[i];
		if (n[i] % 2 == 1 && (min == 0 || min > n[i])) {
			min = n[i];
		}
		if (n[i] % 2 == 1) {
			sum += n[i];
		}
	}
	if (sum == 0) {
		cout << -1;
	}
	else {
		cout << sum << '\n' << min;
	}
	cout << '\n';

	return 0;
}