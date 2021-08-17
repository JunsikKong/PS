#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int m, n, min, sum, sw, i;

	min = 0;
	sum = 0;
	sw = 0;

	cin >> m >> n;

	if (m < 2) {
		i = 2;
	}
	else {
		i = m;
	}

	for (; i <= n; i++) {
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				sw = 1;
				break;
			}
		}

		if (sw == 0) {
			sum += i;
			if (min == 0) {
				min = i;
			}
		}
		else {
			sw = 0;
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