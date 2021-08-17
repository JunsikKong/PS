#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, f, result;

	cin >> n >> f;
	
	result = n / 100 * 100;

	if (result % f == 0) {
		result = 0;
	}
	else {
		result = (result / f * f + f) % 100;
	}

	if (result < 10) cout << 0;
	cout << result << '\n';

	return 0;
}