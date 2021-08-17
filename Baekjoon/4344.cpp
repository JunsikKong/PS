#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int c, n;

	cin >> c;

	cout.setf(ios::fixed);
	cout.precision(3);

	while (c-- > 0) {
		int sum, cnt;
		double avg, result;

		sum = 0;
		cnt = 0;

		cin >> n;

		int* score;

		score = new int[n];

		for (int i = 0; i < n; i++) {
			cin >> score[i];
			sum += score[i];
		}

		avg = (double)sum / n;

		for (int i = 0; i < n; i++) {
			if (avg < score[i]) cnt++;
		}

		result = (double)cnt / n * 100;

		cout << result << '%' << '\n';

		delete[] score;
	}

	return 0;
}