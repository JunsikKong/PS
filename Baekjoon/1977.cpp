#include <iostream>
#include <cmath>

using namespace std;

int Baekjoon1977(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int m, n, msqrt, nsqrt, sum, min;
	sum = 0;

	cin >> m >> n;

	msqrt = ceil(sqrt(m));
	nsqrt = floor(sqrt(n));

	for (int i = msqrt; i <= nsqrt; i++) {
		sum += pow(i, 2);
	}

	if (sum == 0) cout << -1 << '\n';
	else {
		min = pow(msqrt, 2);
		cout << sum << '\n';
		cout << min << '\n';
	}

	return 0;
}