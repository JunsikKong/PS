#include <iostream>

using namespace std;

int Baekjoon10869(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int a, b;
	cin >> a >> b;

	cout << a + b << '\n';
	cout << a - b << '\n';
	cout << a * b << '\n';
	cout << a / b << '\n';
	cout << a % b << '\n';

	return 0;
}