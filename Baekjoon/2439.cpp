#include <iostream>

using namespace std;

int Baekjoon2439(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << ' ';
        }
        for (int j = 0; j < i + 1; j++) {
            cout << '*';
        }
        cout << '\n';
    }

	return 0;
}