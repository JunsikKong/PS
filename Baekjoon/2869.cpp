#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int a, b, v, tag, result;
	tag = 1;

	cin >> a >> b >> v;

	if ((v - a) % (a - b) != 0) {
		result = (v - a) / (a - b) + tag + 1;
	}
	else {
		result = (v - a) / (a - b) + tag;
	}

	cout << result << '\n';

	return 0;
}