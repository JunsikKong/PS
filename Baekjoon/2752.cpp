#include <iostream>
using namespace std;

void bubble(int* n, int size);

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n[3] = { 0, };

	cin >> n[0] >> n[1] >> n[2];

	bubble(n, 3);

	cout << n[0] << ' ';
	cout << n[1] << ' ';
	cout << n[2] << '\n';

	return 0;
}

void bubble(int* n, int size) {
	if (size != 1) {
		for (int i = 0; i < size - 1; i++) {
			int swap;
			if (n[i] > n[i + 1]) {
				swap = n[i];
				n[i] = n[i + 1];
				n[i + 1] = swap;
			}
		}
		bubble(n, size - 1);
	}
}