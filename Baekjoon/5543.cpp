#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int a, b, c, cola, cyder, result;

	cin >> a >> b >> c >> cola >> cyder;

	if (a < b) {
		result = a;
	}
	else {
		result = b;
	}

	if (result > c) {
		result = c;
	}

	if (cola < cyder) {
		result += cola;
	}
	else {
		result += cyder;
	}

	result -= 50;

	cout << result << '\n';

	return 0;
}