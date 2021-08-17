#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int m, n;

	cin >> m >> n;

	for (int i = m; i <= n; i++) {
		int sq;

		sq = (int)sqrt(i);

		while (i > 1) {
			if (sq == 1) {
				cout << i << '\n';
				break;
			}
			if (i % sq == 0) break;
			else sq--;
		}
	}

	return 0;
}