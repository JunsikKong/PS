#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, max, mid, flag;

	cin >> n;

	max = (n - 1) * 4 + 1;
	mid = max / 2 + 1;

	for (int y = 1; y <= max; y++) {
		for (int x = 1; x <= max; x++) {
			flag = 0;
			for (int c = 0; c < n; c++) {
				if ((mid - c * 2 <= x && mid + c * 2 >= x && (y == mid - c * 2 || y == mid + c * 2)) ||
					(mid - c * 2 <= y && mid + c * 2 >= y && (x == mid - c * 2 || x == mid + c * 2))) {
					cout << '*';
					flag = 1;
				}
			}
			if (flag == 0) {
				cout << ' ';
			}
		}
		cout << '\n';
	}

	return 0;
}