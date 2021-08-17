#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, m, div, rem;

	cin >> n >> m;

	div = n / m;
	rem = n % m;
	
	cout << div << '\n';
	cout << rem << '\n';

	return 0;
}