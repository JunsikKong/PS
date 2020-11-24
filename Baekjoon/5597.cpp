#include <iostream>

using namespace std;

int Baekjoon5597(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n[30] = { 0, };

	for (int i = 0; i < 28; i++) {
		int m;
		cin >> m;
		n[m - 1] = 1;
	}

	for (int i = 0; i < 30; i++) {
		if (n[i] == 0) cout << i + 1 << '\n';
	}

	return 0;
}