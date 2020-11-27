#include <iostream>

using namespace std;

int Baekjoon1316(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, result;
	char s[101];

	cin >> n;
	result = n;

	while (n-- > 0) {
		int alphabet[26] = { 0, };
		int oldindex, newindex;

		cin >> s;

		oldindex = s[0] - 'a';
		alphabet[oldindex]++;

		for (int i = 1; s[i] != '\0'; i++) {
			newindex = s[i] - 'a';
			if (oldindex != newindex && alphabet[newindex] != 0) {
				result--;
				break;
			}
			else {
				alphabet[newindex]++;
				oldindex = newindex;
			}
		}
	}

	cout << result << '\n';

	return 0;
}