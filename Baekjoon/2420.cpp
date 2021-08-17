#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	long long int a, b;

	cin >> a >> b;

	if (a > b) {
		cout << a - b;
	}
	else {
		cout << b - a;
	}
	cout << '\n';

	return 0;
}