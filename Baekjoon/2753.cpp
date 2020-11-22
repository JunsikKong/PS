#include <iostream>

using namespace std;

int Baekjoon2753(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, flag;
	cin >> n;

	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0) {
		flag = 1;
	}
	else {
		flag = 0;
	}
	cout << flag << '\n';

	return 0;
}