#include <iostream>

using namespace std;

int Baekjoon11721(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	char input[101] = "";
	
	cin >> input;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			char output;
			output = input[i * 10 + j];
			if (output == '\0') break;
			cout << output;
		}
		if (input[i * 10 + 10] == '\0') break;
		cout << '\n';
	}

	return 0;
}