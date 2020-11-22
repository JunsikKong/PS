#include <iostream>

using namespace std;

int Baekjoon14681(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int a, b, result;
	cin >> a >> b;
	
	if (a > 0 && b > 0) {
		result = 1;
	}
	else if (a < 0 && b > 0) {
		result = 2;
	}
	else if (a < 0 && b < 0) {
		result = 3;
	}
	else {
		result = 4;
	}
	cout << result << '\n';

	return 0;
}