#include <iostream>

using namespace std;

int Baekjoon10797(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

    int n, m, result;
    result = 0;

    cin >> n;

    for (int i = 0; i < 5; i++) {
        cin >> m;
        if (m == n) result++;
    }
    
    cout << result << '\n';

	return 0;
}