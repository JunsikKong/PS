#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, result;

	cin >> n;

	result = n;

	for (; n > 0; n--) {
		int m, max;

		cin >> m;
		max = int(sqrt(m));

		if (m == 1) {
			result--;
			continue;
		}
		
		for (; max > 1; max--) {
			if (m % max == 0) {
				result--; // �Ҽ��� �ƴ� ��� ī��Ʈ ����
				break;
			}
		}
	}

	cout << result << '\n';

	return 0;
}