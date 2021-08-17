#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int sum, result;

	sum = 0;
	result = 0;

	for (int i = 0; i < 4; i++) {
		int out, in;
		cin >> out >> in;
		sum += in - out;
		if (result < sum) {
			result = sum;
		}
	}

	cout << result << '\n';

	return 0;
}