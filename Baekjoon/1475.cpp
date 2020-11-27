#include <iostream>
#include <cmath>

using namespace std;

int Baekjoon1475(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, result;
	double num[10] = { 0, };

	result = 0;

	cin >> n;

	do {
		num[n % 10]++;
		n /= 10;
	} while (n > 0);

	num[6] = ceil((num[6] + num[9]) / 2); // 6�� ������ 9�� ������ ��ħ.

	for (int i = 0; i < 9; i++) { // 0���� 8���� Ž��.
		if (result < num[i]) result = num[i];
	}

	cout << result << '\n';

	return 0;
}