#include <iostream>

using namespace std;

void selfnum(int n, int* num);

int main(void) {

	int num[10000] = { 0, };

	for (int i = 1; i <= 10000; i++) {
		selfnum(i, num);
	}

	for (int j = 1; j <= 10000; j++) {
		if (num[j - 1] == 0) cout << j << '\n';
	}

	return 0;
}

void selfnum(int n, int *num) {
	int sum = n;

	while (1) {
		if (n / 10 > 0) {
			sum += n % 10;
			n /= 10;
		}
		else {
			sum += n;
			if (sum <= 10000) num[sum - 1]++;
			break;
		}
	}
}