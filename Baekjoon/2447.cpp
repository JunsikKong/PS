#include <iostream>

using namespace std;

int flag(int x, int y, int p);

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, p, tmp;

	p = 0;

	cin >> n;

	tmp = n;

	while (tmp != 1) {
		p++;
		tmp /= 3;
	}

	for (int x = 1; x <= n; x++) {
		for (int y = 1; y <= n; y++) {
			if (flag(x, y, p)) {
				cout << '*';
			}
			else {
				cout << ' ';
			}
		}
		if (x != n) {
			cout << '\n';
		}
	}

	return 0;
}

int flag(int x, int y, int p) {
	if ((x + 1) % 3 == 0 && (y + 1) % 3 == 0) {
		return 0;
	}
	else {
		if (p == 1) {
			return 1;
		}
		else {
			return flag((x - 1) / 3 + 1, (y - 1) / 3 + 1, p - 1);
		}
	}
}