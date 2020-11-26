#include <iostream>
#include <cmath>

using namespace std;

int Baekjoon1004(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int t;
	cin >> t;
	for (; t > 0; t--) {
		int x1, y1, x2, y2, n, result;

		result = 0;

		cin >> x1 >> y1 >> x2 >> y2 >> n;
		for (; n > 0; n--) {
			int cx, cy, r, flagsrc, flagdes;

			flagsrc = 0;
			flagdes = 0;

			cin >> cx >> cy >> r;

			if (pow((x1 - cx), 2) + pow((y1 - cy), 2) < pow(r, 2)) flagsrc = 1;
			if (pow((x2 - cx), 2) + pow((y2 - cy), 2) < pow(r, 2)) flagdes = 1;
			if (flagsrc != flagdes) result++;
		}
		cout << result << '\n';
	}

	return 0;
}