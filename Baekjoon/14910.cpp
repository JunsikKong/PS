#include <iostream>

using namespace std;

int Baekjoon14910(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int num, oldnum;

	oldnum = -1000001;

	while (1) {
		cin >> num;

		if (cin.eof()) {
			cout << "Good";
			break;
		}
		
		if (oldnum > num) {
			cout << "Bad";
			break;
		}

		else oldnum = num;
	}
	
	cout << '\n';

	return 0;
}