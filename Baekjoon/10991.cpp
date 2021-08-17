#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	
	cin >> n;

	for (int y = 1; y <= n; y++) {
		int flag;

		flag = 1;

		for (int x = 1; x <= n + y - 1; x++) {
			if (x > n - y) {
				if (flag == 1) cout << '*';
				else cout << ' ';
				flag *= -1;
			}
			else cout << ' ';
		}
		cout << '\n';
	}

	return 0;
}