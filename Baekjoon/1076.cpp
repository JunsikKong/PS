#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	char n[7] = { 0, };
	char color[][7] = { "black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white" };

	int index;
	long long int result;
	result = 0;

	for (int i = 0; i < 3; i++) {
		index = -1;
		cin >> n;
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k < 7; k++) {
				if (n[k] == color[j][k]) {
					if (n[k] == '\0') {
						index = j;
						break;
					}
				}
				else break;
			}
			if (index > -1) break;
		}

		if (i == 0) result += index * 10;
		else if (i == 1) result += index;
		else result *= pow(10, index);
	}

	cout << result << '\n';

	return 0;
}