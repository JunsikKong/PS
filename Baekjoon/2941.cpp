#include <iostream>
#include <cstring>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	char n[101] = { 0, };
	char chr[8][4] = { "c=", "c-", "d-", "s=", "z=", "lj", "nj", "dz=" };
	int result;
	int max;

	cin >> n;

	result = strlen(n);
	max = result;

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < max; j++) {
			if (i < 7 && n[j] == chr[i][0] && n[j + 1] == chr[i][1]) {
				result--;
				j += 1;
			}
			if (i == 7 && n[j] == chr[i][0] && n[j + 1] == chr[i][1] && n[j + 2] == chr[i][2]) {
				result--;
				j += 2;
			}
		}
	}

	cout << result << '\n';

	return 0;
}