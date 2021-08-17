#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, k, result;
	int coin[10] = { 0, };
	result = 0;

	cin >> n >> k;

	for (int i = 0; i < n; i++) cin >> coin[i];

	for (int i = n - 1; i >= 0; i--) {
		if (k >= coin[i]) {
			result += k / coin[i];
			k %= coin[i];
		}
	}
	
	cout << result << '\n';

	return 0;
}