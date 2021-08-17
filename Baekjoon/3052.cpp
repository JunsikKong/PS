#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, result;
	int num[42] = { 0, };

	result = 0;

	for (int i = 0; i < 10; i++) {
		cin >> n;
		num[n % 42]++;
	}

	for (int j = 0; j < 42; j++) {
		if (num[j] != 0) result++;
	}

	cout << result << '\n';

	return 0;
}