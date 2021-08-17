#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

    int n, m, result;

    result = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> m;
        result += m;
    }

    if (result * 2 > n) {
        cout << "Junhee is cute!";
    }
    else {
        cout << "Junhee is not cute!";
    }

    cout << '\n';

	return 0;
}