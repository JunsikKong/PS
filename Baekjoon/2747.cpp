#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

    int n, a, b, c;
    a = 0;
    b = 1;
    c = 0;

    cin >> n;

    if (n == 0) c = a;
    else if (n == 1) c = b;
    else {
        for (int i = 1; i < n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
    }

    cout << c << '\n';

	return 0;
}