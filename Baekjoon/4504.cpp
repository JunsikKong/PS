#include <iostream>

using namespace std;

int Baekjoon4504(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, m;
	
	cin >> n;

	while (1) {
		cin >> m;
		if (m == 0) break;
		cout << m;
		if (m % n == 0) {
			cout << " is a multiple of ";
		}
		else {
			cout << " is NOT a multiple of ";
		}
		cout << n << '.' << '\n';
	}

	return 0;
}