#include <iostream>

using namespace std;

int Baekjoon1193(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, s, i;
	s = 0;
	i = 1;

	cin >> n;
	while (1) {
		if (s < n && n <= s + i) {
			n -= s;
			break;
		}
		s += i;
		i++;
	}

	if(i % 2 == 0) {
		cout << n;
	}
	else {
		cout << (i + 1) - n;
	}

	cout << "/";

	if (i % 2 != 0) {
		cout << n;
	}
	else {
		cout << (i + 1) - n;
	}

	cout << '\n';

	return 0;
}