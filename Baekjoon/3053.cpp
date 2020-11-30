#include <iostream>
#define M_PI 3.14159265358979323846

using namespace std;

int Baekjoon3053(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	cout << fixed;
	cin.precision(6);

	double r, euclidean, taxicab;

	cin >> r;
	
	euclidean = M_PI * r * r;
	taxicab = r * r + r * r;

	cout << euclidean << '\n';
	cout << taxicab << '\n';

	return 0;
}