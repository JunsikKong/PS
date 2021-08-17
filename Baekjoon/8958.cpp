#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, cnt, result;
	char s[81] = { 0, };

	cin >> n;
	
	while (n-- > 0) {
		cin >> s;

		cnt = 0;
		result = 0;

		for (int i = 0; s[i] != '\0'; i++) {
			if (s[i] == 'O') {
				cnt++;
				result += cnt;
			}
			else {
				cnt = 0;
			}
		}

		cout << result << '\n';
	}

	return 0;
}