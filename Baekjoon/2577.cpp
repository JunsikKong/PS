#include <iostream>

using namespace std;

int Baekjoon2577(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

    int a, b, c, mul;
    int s[10] = { 0, };

    cin >> a >> b >> c;

    mul = a * b * c;

    while (mul != 0) {
        for (int i = 0; i < 10; i++) {
            if (mul % 10 == i) {
                s[i]++;
                break;
            }
        }
        mul /= 10;
    }

    for (int i = 0; i < 10; i++) {
        cout << s[i] << '\n';
    }

    cout << '\n';

	return 0;
}