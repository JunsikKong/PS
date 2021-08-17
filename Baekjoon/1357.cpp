#include <iostream>

using namespace std;

int rev(int n);

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int x, y, result;

	result = 0;

	cin >> x >> y;

	result = rev(x) + rev(y);
	result = rev(result);

	cout << result << '\n';

	return 0;
}

int rev(int n) {
	int result;
	result = 0;

	while (n > 0) {
		result = result * 10 + n % 10;
		n /= 10;
	}

	return result;
}