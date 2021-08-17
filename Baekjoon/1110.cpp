#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

    int n, m, x, result;
    result = 1;

    cin >> n;
    m = n;

    while (1) {
        x = (m % 10) * 10 + (m / 10 + m % 10) % 10;
        if (x == n) {
            break;
        }
        result++;
        m = x;
    }
    
    cout << result << '\n';

    return 0;
}