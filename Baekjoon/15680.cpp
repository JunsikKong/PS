#include <iostream>

using namespace std;

int Baekjoon15680(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	
	cin >> n;

	if (n == 0) cout << "YONSEI";
	else if (n == 1) cout << "Leading the Way to the Future";
	cout << '\n';

	return 0;
}