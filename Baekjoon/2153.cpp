#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	char s[21] = { 0, };
	int sum = 0;
	int sq = 0;

	cin >> s;

	for (int i = 0; s[i] != '\0'; i++) {
		if ('a' <= s[i] && s[i] <= 'z') {
			sum += s[i] - 'a' + 1;
		}
		else {
			sum += s[i] - 'A' + 27;
		}
	}

	sq = sqrt(sum);

	while (sq > 1) {
		if (sum % sq == 0) {
			cout << "It is not a prime word.\n";
			break;
		}
		sq--;
	}

	if (sq == 1) cout << "It is a prime word.\n";

	return 0;
}