#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n[5], result;
	result = 0;

	for (int i = 0; i < 5; i++) {
		cin >> n[i];
		n[i] *= n[i];
		result += n[i];
	}

	result %= 10;

	cout << result << '\n';

	return 0;
}