#include <iostream>

using namespace std;

int Baekjoon5596(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int a, b, asum, bsum;
	asum = 0;
	bsum = 0;

	for (int i = 0; i < 4; i++) {
		cin >> a;
		asum += a;
	}
	for (int i = 0; i < 4; i++) {
		cin >> b;
		bsum += b;
	}

	if (asum > bsum) {
		cout << asum;
	}
	else {
		cout << bsum;
	}
	cout << '\n';

	return 0;
}