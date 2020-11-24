#include <iostream>
#include <cmath>

using namespace std;

int f(int x, int mask);

int Baekjoon2864(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int a, b, min, max;
	cin >> a >> b;

	min = a - f(a, 6) + b - f(b, 6);
	max = a + f(a, 5) + b + f(b, 5);

	cout << min << ' ' << max << '\n';

	return 0;
}

int f(int x, int mask) {
	int r = 0;

	for (int i = 0; i < 6; i++) {
		if (x % 10 == mask) r += pow(10, i);
		x /= 10;
	}

	return r;
}
