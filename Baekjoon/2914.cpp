#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int a, i, result;

	cin >> a >> i;

	result = a * (i - 1) + 1;
	
	cout << result << '\n';

	return 0;
}