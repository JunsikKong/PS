#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, result;
	result = 0;
	
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			if (i * j <= n) result++;
			else break;
		}
	}
	
	cout << result << '\n';

	return 0;
}