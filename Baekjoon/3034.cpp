#include <iostream>
#include <cmath>

using namespace std;

int Baekjoon3034(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, w, h, c, input;

	cin >> n >> w >> h;

	c = sqrt(w * w + h * h);

	for (int i = 0; i < n; i++) {
		cin >> input;
		if (input <= c) {
			cout << "DA";
		}
		else {
			cout << "NE";
		}
		cout << '\n';
	}

	return 0;
}