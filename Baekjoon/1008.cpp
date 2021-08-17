#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int a, b;
	cin >> a >> b;

	cout << fixed; // 소수점 자릿수 고정 후 표현
	//cout.setf(ios::fixed);
	cout.precision(10); // 10자리 까지 표현
	cout << (double)a / b << '\n';
	cout.unsetf(ios::fixed); // 소수점 자릿수 고정 해제

	return 0;
}