#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int a, b;
	cin >> a >> b;
	if (a < b) {
		cout << "<" << '\n';
	}
	else if (a > b) {
		cout << ">" << '\n';
	}
	else {
		cout << "==" << '\n';
	}
	
	return 0;
}