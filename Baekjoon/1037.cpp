#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, m, max, min, result;

	cin >> n;
	cin >> m;

	max = m;
	min = m;

	for (; n > 1; n--) {
		cin >> m;
		if (max < m) max = m;
		if (min > m) min = m;
	}

	result = max * min;

	cout << result << '\n';

	return 0;
}