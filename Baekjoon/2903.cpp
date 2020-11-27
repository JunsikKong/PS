#include <iostream>

using namespace std;

int Baekjoon2903(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, result;
	
	result = 2;

	cin >> n;

	while (n-- > 0) result += result - 1;

	result = result * result;

	cout << result << '\n';
	
	return 0;
}