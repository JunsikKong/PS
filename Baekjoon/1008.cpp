#include <iostream>

using namespace std;

int Baekjoon1008(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int a, b;
	cin >> a >> b;

	cout << fixed; // �Ҽ��� �ڸ��� ���� �� ǥ��
	cout.precision(10); // 10�ڸ� ���� ǥ��
	cout << (double)a / b << '\n';
	cout.unsetf(ios::fixed); // �Ҽ��� �ڸ��� ���� ����

	return 0;
}