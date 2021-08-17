#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	char input[101] = { 0 };
	char output[101] = { 0 };
	int cnt;

	cnt = 0;

	cin >> input;

	output[0] = input[0];

	for (int i = 1; i < 101; i++) {
		if (input[i] == '-') output[++cnt] = input[++i];
	}
	cout << output << '\n';

	return 0;
}