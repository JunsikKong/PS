#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, sum, tmp, result;

	sum = 1;
	result = 1;

	cin >> n;

	if (n == 1) {
		cout << 1;
	}
	else {
		while (1) {
			tmp = sum;
			sum += 6 * result;
			result++;
			if (tmp < n && n <= sum) {
				cout << result << '\n';
				break;
			}
		}
	}

	return 0;
}