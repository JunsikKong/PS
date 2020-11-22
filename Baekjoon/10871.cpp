#include <iostream>

using namespace std;

int Baekjoon10871(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int* ptr;
	int n, x, cnt;
	cnt = 0;

	cin >> n >> x;

	ptr = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> ptr[i];
		if (ptr[i] < x) {
			cout << ptr[i] << " ";
		}
	}
	cout << '\n';

	delete[] ptr;

	return 0;
}