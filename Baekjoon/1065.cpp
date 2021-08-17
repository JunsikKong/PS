#include <iostream>

using namespace std;

int hannum(int num);

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, result;

	cin >> n;

	result = 0;

	while (n > 0) {
		result += hannum(n--);
	}

	cout << result << '\n';

	return 0;
}

int hannum(int num) {
	int unit, gap;

	if (num >= 10) {
		gap = num / 10 % 10 - num % 10;
		while (1) {
			if (num / 10 > 0) {
				unit = num % 10;
				num /= 10;
				if (gap != num % 10 - unit) return 0;
			}
			else return 1;
		}
	}
	else return 1;
}