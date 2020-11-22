#include <iostream>

using namespace std;

int Baekjoon10951(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int a, b;

	while (1) {
		cin >> a >> b;
		if (cin.eof() == true) {
			break;
		}
		cout << a + b << '\n';
	}

	return 0;
}