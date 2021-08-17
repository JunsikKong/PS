#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, m, k, result, temp;

	cin >> n >> m >> k;

	if (n > 2 * m) {
		result = m;
	}
	else {
		result = n / 2;
	}

	temp = m + n - result * 3;

	while (temp < k) {
		result--;
		temp += 3;
	}
	
	cout << result << '\n';

	return 0;
}