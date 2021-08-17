#include <iostream>
#include <cstring>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

    char str[1000001];
    char result;
    int cnt[26] = { 0, };

    cin >> str;

    int max = strlen(str);
    int maxval = 0;
    int maxidx = 0;
    int flag = 0;

    for (int i = 0; i < max; i++) {
        if (str[i] <= 'Z'){
            cnt[str[i] - 'A']++;
        }
        else {
            cnt[str[i] - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (cnt[i] > maxval) {
            maxval = cnt[i];
            maxidx = i;
            flag = 0;
        }
        else if (cnt[i] == maxval) {
            flag = 1;
        }
    }

    result = maxidx + 'A';

    if (flag == 1) {
        cout << "?" << '\n';
    }
    else {
        cout << result << '\n';
    }

    return 0;
}