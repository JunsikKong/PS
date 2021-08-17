#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

    int e, s, m, y;
    y = 1;

    cin >> e >> s >> m;

    while (e != 1 || s != 1 || m != 1)
    {
        if (e == 1) e = 15;
        else e--;
        if (s == 1) s = 28;
        else s--;
        if (m == 1) m = 19;
        else m--;
        y++;
    }

    cout << y << '\n';

    return 0;
}