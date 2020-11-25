#include <iostream>

using namespace std;

int Baekjoon10569(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

    int t, v, e, result;
    
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> v >> e;

        result = 2 + e - v;

        cout << result << '\n';
    }

	return 0;
}