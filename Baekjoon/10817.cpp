#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

    int a, b, c, tmp;
    cin >> a >> b >> c;

    if (a > b) {
        tmp = a;
        a = b;
        b = tmp;
    }
    if (a > c) {
        tmp = a;
        a = c;
        c = tmp;
    }
    if (b > c) {
        tmp = b;
        b = c;
        c = tmp;
    }

    cout << b << '\n';

	return 0;
}