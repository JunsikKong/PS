#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, r, e, c;
	
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> r >> e >> c;
		if (r < e - c) cout << "advertise";
		else if (r > e - c) cout << "do not advertise";
		else cout << "does not matter";
		cout << '\n';
	}

	return 0;
}