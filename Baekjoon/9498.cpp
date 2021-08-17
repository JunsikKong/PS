#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;
	if (n <= 100 && n >= 90) {
		cout << "A" << '\n';
	}
	else if (n <= 89 && n >= 80) {
		cout << "B" << '\n';
	}
	else if (n <= 79 && n >= 70) {
		cout << "C" << '\n';
	}
	else if (n <= 69 && n >= 60) {
		cout << "D" << '\n';
	}
	else {
		cout << "F" << '\n';
	}

	return 0;
}