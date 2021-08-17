#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	double max, sum, result;
	double* score;

	max = 0;
	sum = 0;

	cin >> n;

	score = new double[n];

	for (int i = 0; i < n; i++) {
		cin >> score[i];
		if (max < score[i]) max = score[i];
	}

	for (int i = 0; i < n; i++) {
		score[i] = score[i] / max * 100;
		sum += score[i];
	}

	result = (double)sum / n;

	cout.setf(ios::fixed);
	cout.precision(3);

	cout << result << '\n';

	delete[] score;

	return 0;
}