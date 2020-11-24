#include <iostream>

using namespace std;

int Baekjoon5554(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, min, sec;

	sec = 0;

	for (int i = 0; i < 4; i++) {
		cin >> n;
		sec += n;
	}

	min = sec / 60;
	sec = sec % 60;

	cout << min << '\n' << sec << '\n';

	return 0;
}