#include <iostream>

using namespace std;

int solonumber(int n1, int n2, int n3);

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int x[3], y[3], resultX, resultY;
	
	for (int i = 0; i < 3; i++) {
		cin >> x[i] >> y[i];
	}

	resultX = solonumber(x[0], x[1], x[2]);
	resultY = solonumber(y[0], y[1], y[2]);

	cout << resultX << ' ';
	cout << resultY << '\n';

	return 0;
}

int solonumber(int n1, int n2, int n3) {
	if (n1 == n2) return n3;
	if (n2 == n3) return n1;
	if (n1 == n3) return n2;
}