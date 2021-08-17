#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, m, result;

	result = 0;
	
	cin >> n;

	cin >> m;

	while (n-- > 1) {
		int basecircle, subcircle, mask, min;
		
		mask = 2;

		cin >> subcircle;

		basecircle = m;
		
		if (basecircle > subcircle) min = subcircle;
		else min = basecircle;

		while (mask <= min) {
			if (basecircle % mask == 0 && subcircle % mask == 0) {
				basecircle /= mask;
				subcircle /= mask;
			}
			else {
				mask++;
			}
		}

		cout << basecircle << '/' << subcircle << '\n';
	}

	return 0;
}