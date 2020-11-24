#include <iostream>

using namespace std;

int Baekjoon2490(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n[4];

	for (int i = 0; i < 3; i++) {
		int sum;

		sum = 0;

		for (int j = 0; j < 4; j++) {
			cin >> n[j];
			sum += n[j];
		}

		switch (sum) {
		case 1:
			cout << 'C';
			break;
		case 2:
			cout << 'B';
			break;
		case 3:
			cout << 'A';
			break;
		case 4:
			cout << 'E';
			break;
		default:
			cout << 'D';
			break;
		}
		cout << '\n';
	}

	cout << '\n';

	return 0;
}