#include <iostream>

using namespace std;

int Baekjoon2562(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, max, index;
	
	max = 0;

	for (int i = 0; i < 9; i++) {
		cin >> n;
		if (max < n) {
			max = n;
			index = i + 1;
		}
	}

	cout << max << '\n' << index << '\n';

	return 0;
}