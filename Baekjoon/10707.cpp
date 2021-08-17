#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int a, b, c, d, p, x, y, result;

	cin >> a >> b >> c >> d >> p;

	x = a * p;

	if (p < c) y = b;
	else y = b + (p - c) * d;

	if (x > y) result = y;
	else result = x;

	cout << result << '\n';

	return 0;
}