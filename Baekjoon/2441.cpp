#include <iostream>

using namespace std;

int Baekjoon2441(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << ' ';
        }
        for (int j = i; j < n; j++) {
            cout << '*';
        }
        cout << '\n';
    }

	return 0;
}