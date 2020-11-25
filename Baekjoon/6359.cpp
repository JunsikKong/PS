#include <iostream>

using namespace std;

int Baekjoon6359(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int arr[100] = { 0, };
        int m;
        
        cin >> m;

        for (int j = 0; j < m; j++) {
            for (int k = j; k < m; k += j + 1) {
                if (arr[k] == 0) arr[k] = 1;
                else arr[k] = 0;
            }
        }
        int result;

        result = 0;

        for (int j = 0; j < m; j++) {
            result += arr[j];
        }

        cout << result << '\n';
    }

    cout << '\n';

	return 0;
}