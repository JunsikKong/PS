#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, a, b, result;
	result = -1;
	cin >> n;

	a = n / 5;
	b = n - a * 5;
	
	while (b <= n) {
		if (b % 3 == 0) {
			result = b / 3 + a;
			break;
		}
		b += 5;
		a--;
	}

	cout << result << '\n';

	return 0;
}