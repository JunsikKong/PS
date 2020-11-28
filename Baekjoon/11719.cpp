#include <iostream>

using namespace std;

int Baekjoon11719(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	while (1) {
		char s[101] = { 0, };
		cin.getline(s, 101);
		if (cin.eof()) break;
		cout << s << '\n';
	}

	return 0;
}