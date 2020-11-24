#include <iostream>

using namespace std;

int Baekjoon2845(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

    int l, p, n[5], result;

    cin >> l >> p;

    for (int i = 0; i < 5; i++) {
        cin >> n[i];
        result = n[i] - l * p;
        cout << result;
        if (i < 4) cout << ' ';
    }

	return 0;
}