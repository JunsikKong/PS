#include <iostream>

using namespace std;

int Baekjoon2588(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int a, b;
	int b1, b2, b3;
	cin >> a >> b;

	b1 = b % 10;
	b2 = (b % 100 - b1) / 10;
	b3 = (b - b2 * 10 - b1) / 100;

	cout << a * b1 << '\n';
	cout << a * b2 << '\n';
	cout << a * b3 << '\n';
	cout << a * b << '\n';

	return 0;
}