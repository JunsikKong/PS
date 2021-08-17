#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

    int n, result;
    
    result = 1;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    
    cout << result << '\n';

	return 0;
}