#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int r1, r2, s;

	cin >> r1 >> s;

	r2 = 2 * s - r1;

	cout << r2 << '\n';

	return 0;
}