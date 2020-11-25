#include <iostream>

using namespace std;

int Baekjoon9295(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		int a, b, result;
		
		cin >> a >> b;
		result = a + b;

		cout << "Case " << i << ": " << result << '\n';
	}

	return 0;
}