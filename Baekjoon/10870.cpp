#include <iostream>

using namespace std;

int fibonacci(int n);

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n;

	cin >> n;

	cout << fibonacci(n) << '\n';

	return 0;
}

int fibonacci(int n) {
	if (n == 0) {
		return 0;
	}
	else if (n == 1) {
		return 1;
	}
	else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}