#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int t, r;
	char s[21] = { 0, };

	cin >> t;

	while (t-- > 0) {
		cin >> r >> s;
		for (int i = 0; s[i] != '\0'; i++) {
			for (int j = r; j > 0; j--) {
				cout << s[i];
			}
		}
		cout << '\n';
	}

	return 0;
}