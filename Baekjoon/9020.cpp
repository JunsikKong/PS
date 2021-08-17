#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int isPrime[10000]; // ¼Ò¼ö¸é 1

	isPrime[0] = 0;

	for (int i = 1; i < 10000; i++) {
		isPrime[i] = 1;
	}

	for (int i = 2; i <= sqrt(10000); i++) {
		if (isPrime[i - 1] == 1) {
			for (int j = i + i; j < 10000; j += i) {
				isPrime[j - 1] = 0;
			}
		}
	}

	int t;

	cin >> t;

	while (t-- > 0) {
		int n;

		cin >> n;

		for (int i = n / 2; i > 1; i--) {
			if (isPrime[i - 1] == 1 && isPrime[n - i - 1] == 1) {
				cout << i << ' ';
				cout << n - i << '\n';
				break;
			}
		}
	}

	return 0;
}