#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n;

	cin >> n;

	if (n < 100) {
		cout << n / 10 + n % 10 << '\n';
	}
	else {
		if (n % 10 == 0) {
			cout << n / 100 + 10 << '\n';
		}
		else {
			cout << n % 10 + 10 << '\n';
		}
	}

	return 0;
}