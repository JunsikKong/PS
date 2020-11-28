#include <iostream>

using namespace std;

int distance1011(int n);

int Baekjoon1011(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int t, x, y, gap, result;

	cin >> t;

	while (t-- > 0) {
		cin >> x >> y;

		gap = y - x;

		cout << distance1011(gap) << '\n';
	}

	return 0;
}

int distance1011(int n) {
	int i = 1;
	int result = 0;

	while (n > 0) {
		n -= i;
		result++;
		if (result % 2 == 0) { //result Â¦¼öÀÏ ¶§ i++
			i++;
		}
	}

	return result;
}