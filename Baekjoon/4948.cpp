#include <iostream>
#include <cmath>

using namespace std;

int Baekjoon4948(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, result;

	int isPrime[123456 * 2]; // 1일때 소수
	
	isPrime[0] = 0;
	for (int i = 1; i < 123456 * 2; i++) {
		isPrime[i] = 1;
	}

	for (int i = 2; i <= sqrt(123456 * 2) + 1; i++) {
		int cnt = 2;
		if (isPrime[i - 1] == 1) {
			/*
			for (int j = 2 * i; j <= 123456 * 2; j += i) {
				isPrime[j - 1] = 0;
			}*/

			while (1) {
				if (i * cnt >= 123456 * 2) break;
				isPrime[i * cnt - 1] = 0;
				cnt++;
			}
		}
	}

	while (1) {
		cin >> n;
		if (n == 0) break;
		else {
			result = 0;
			for (int i = n + 1; i <= 2 * n; i++) {
				result += isPrime[i - 1];
			}
			cout << result << '\n';
		}
	}

	return 0;
}