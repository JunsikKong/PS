#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int a, b, c, result;
	while (1) {
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0) break;
		if (a > b && a > c) {
			result = a * a - b * b - c * c;
		}
		else {
			if (b > a && b > c) {
				result = b * b - a * a - c * c;
			}
			else {
				result = c * c - a * a - b * b;
			}
		}
		
		if (result == 0) {
			cout << "right";
		}
		else {
			cout << "wrong";
		}
		cout << '\n';
	}

	return 0;
}