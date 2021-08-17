#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	char n[101] = { 0, };
	int result;

	result = 0;

	cin >> n;

	for (int i = 0; n[i] != '\0'; i++) {
		result++;
	}

	cout << result << '\n';


	return 0;
}