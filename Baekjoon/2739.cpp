#include <iostream>

using namespace std;

int Baekjoon2739(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	for (int i = 1; i < 10; i++) {
		cout << n << " * " << i << " = " << n * i << '\n';
	}
	
	return 0;
}