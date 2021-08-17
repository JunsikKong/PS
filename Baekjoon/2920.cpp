#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n[8] = { 0, };
	int cnt;

	cnt = 0;

	for (int i = 0; i < 8; i++) {
		cin >> n[i];
		if (i > 0) {
			if (n[i - 1] < n[i]) {
				cnt++;
			}
			else {
				cnt--;
			}
		}
	}

	if (cnt == 7) {
		cout << "ascending";
	}
	else if (cnt == -7) {
		cout << "descending";
	}
	else {
		cout << "mixed";
	}

	cout << '\n';

	return 0;
}