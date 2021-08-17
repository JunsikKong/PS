#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

    int x, y;
    int w[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 };
    char week[][4] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };

    cin >> x >> y;

    for (int i = 0; i < x; i++) {
        y = y + w[i];
    }

    for (int i = 0; i < 3; i++) {
        cout << week[(y - 1) % 7][i];
    }
    cout << '\n';

    return 0;
}