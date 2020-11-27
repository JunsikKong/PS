#include <iostream>

using namespace std;

int Baekjoon10809(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	char s[101] = { 0, };
	int alphabet[26];

	fill_n(alphabet, 26, -1);

	cin >> s;

	for (int i = 0; s[i] != '\0'; i++) {
		int index = s[i] - 'a';
		if (alphabet[index] == -1) alphabet[index] = i;
	}

	for (int j = 0; j < 26; j++) {
		cout << alphabet[j] << ' ';
	}

	cout << '\n';

	return 0;
}