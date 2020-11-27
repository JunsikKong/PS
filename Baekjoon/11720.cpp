#include <iostream>

using namespace std;

int Baekjoon11720(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, result;
	char num[101] = { 0, };

	result = 0;

	cin >> n >> num;

	for (int i = 0; num[i] != '\0'; i++) {
		result += num[i] - '0';
	}

	cout << result << '\n';

	return 0;
}