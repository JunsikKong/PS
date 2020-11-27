#include <iostream>
#include <cmath>

using namespace std;

int Baekjoon1550(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	char n[6] = { 0, };
	
	int result = 0;
	int size = 0;

	cin >> n;

	for (int i = 5; i >= 0; i--) {
		if (n[i] != '\0') {
			if (n[i] >= '0' && n[i] <= '9') {
				result += int(pow(16, size)) * (n[i] - '0');
			}
			else if (n[i] >= 'A' && n[i] <= 'F') {
				result += int(pow(16, size)) * (n[i] - 'A' + 10);
			}
			size++;
		}
	}

	cout << result << '\n';
	

	return 0;
}