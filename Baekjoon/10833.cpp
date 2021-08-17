#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, result;
	result = 0;

	cin >> n;
	
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		result += b % a;
	}
	
	cout << result << '\n';

	return 0;
}