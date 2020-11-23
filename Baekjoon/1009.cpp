#include <iostream>

using namespace std;

int Baekjoon1009(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

    int n, a, b, div, result;

    cin >> n;

    for (int i = 0; i < n; i++) {
        result = 1;

        cin >> a >> b;

        if (b % 4 == 0) {
            div = 4;
        }
        else {
            div = b % 4;
        }

        for (int j = 0; j < div; j++) {
            result *= a;
        }
        result %= 10;

        if (result == 0) {
            cout << 10;
        }
        else {
            cout << result;
        }
        cout << '\n';
    }

    return 0;
}