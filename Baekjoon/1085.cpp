#include <iostream>

using namespace std;

int Baekjoon1085(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int x, y, w, h, result;

	cin >> x >> y >> w >> h;

	if (w - x > h - y) result = h - y;
	else result = w - x;
	if (x > y) x = y;
	if (x < result) result = x;

	cout << result << '\n';

	return 0;
}