#include <iostream>

using namespace std;

int Baekjoon10039(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

    int n, result;

    result = 0;

    for (int i = 0; i < 5; i++) {
        cin >> n;

        if (n < 40) result += 40;
        else result += n;
    }
    result /= 5;

    cout << result << '\n';

	return 0;
}