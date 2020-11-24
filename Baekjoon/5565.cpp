#include <iostream>

using namespace std;

int Baekjoon5565(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

    int sum_price, n;

    cin >> sum_price;

    for (int i = 0; i < 9; i++) {
        cin >> n;
        sum_price -= n;
    }
    
    cout << sum_price;

    return 0;
}