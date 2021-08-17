#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int t, h, w, n, result;
	int dong, ho;

	cin >> t;

	while (t-- > 0) {
		cin >> h >> w >> n;

		ho = (n - 1) / h + 1;

		if (n % h == 0) dong = h;
		else dong = n % h;

		result = dong * 100 + ho;

		cout << result << '\n';
	}

	return 0;
}