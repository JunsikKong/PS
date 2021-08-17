#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	long long int a, b, swap;

	a = 1;
	b = 1;

	cin >> n;

	if (n <= 2) cout << 1;
	else {
		for (int i = 2; i < n; i++) {
			swap = b;
			b = a + b;
			a = swap;
		}
		cout << b;
	}
	cout << '\n';

	return 0;
}