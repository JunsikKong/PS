#include <iostream>
#include <cmath>

using namespace std;

int Baekjoon1002(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x1, y1, r1, x2, y2, r2;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		int rsum, rsub, result;
		double d;

		d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

		rsum = r1 + r2;
		rsub = r1 - r2;
		if (rsub < 0) rsub *= -1;

		if (x1 == x2 && y1 == y2 && r1 == r2) result = -1;
		else if (rsub < d && d < rsum) result = 2;
		else if (d == rsum || d == rsub) result = 1;
		else result = 0;

		cout << result << '\n';
	}

	return 0;
}