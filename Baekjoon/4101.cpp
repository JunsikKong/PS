#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int a, b;

	while (1) {
		cin >> a >> b;
		if (a == 0 && b == 0) break;
		if (a > b) cout << "Yes";
		else cout << "No";
		cout << '\n';
	}

	return 0;
}