#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int h, m;
	int rh, rm;
	cin >> h >> m;

	if (m < 45) {
		rm = m + 15;
		if (h == 0) {
			rh = 23;
		}
		else {
			rh = h - 1;
		}
	}
	else {
		rm = m - 45;
		rh = h;
	}
	
	cout << rh << " " << rm << '\n';

	return 0;
}