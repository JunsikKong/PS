#include <iostream>

using namespace std;

int func(int x, int y);

int Baekjoon5032(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int e, f, c;
	
	cin >> e >> f >> c;

	cout << func(e + f, c);

	return 0;
}

int func(int x, int y) {
	if (x / y + x % y >= y) {
		return func(x / y + x % y, y) + x / y;
	}
	else {
		return x / y;
	}
}