#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, cnt, x, b, t;

	cin >> n;

	cnt = 0;
	b = 5;
	t = 500;
	x = 1000 - n;

	while (t != 0) {
		cnt += x / t;
		x -= (x / t) * t;
		if (b == 2) b = 5;
		else b = 2;
		t = t * b / 10;
	}
	
	cout << cnt << '\n';

	return 0;
}