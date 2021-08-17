#include <iostream>

using namespace std;

long long int func(long long int x, long long int y);

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	long long int a, b, c, d, result;

	cin >> a >> b >> c >> d;

	result = func(a, b) + func(c, d);

	cout << result << '\n';

	return 0;
}

long long int func(long long int x, long long int y) {
	long long int sum;
	int i;

	i = 10;
	while (1) {
		if (y < i) {
			sum = x * i + y;
			break;
		}
		else i *= 10;
	}

	return sum;
}