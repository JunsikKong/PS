#include <iostream>
#include <cmath>

using namespace std;

int pactsum15953(int x);
int powsum15953(int x);

int Baekjoon15953(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

    int n, a, b, result;
    int arr[6] = { 500, 300, 200, 50, 30, 10 };
    
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;

        result = 0;

        for (int j = 0; j < 6; j++)
        {
            if (a <= pactsum15953(j + 1) && a > pactsum15953(j)) {
                result = arr[j] * 10000;
            }
        }
        for (int j = 0; j < 5; j++)
        {
            if (b <= powsum15953(j) && b > powsum15953(j - 1)) {
                result = result + pow(2, 9 - j) * 10000;
            }
        }
        cout << result << '\n';
    }

	return 0;
}

int pactsum15953(int x)
{
	if (x < 1) return 0;
	else if (x == 1) return 1;
	else return x + pactsum15953(x - 1);
}

int powsum15953(int x)
{
	if (x < 0) return 0;
	else if (x == 0) return 1;
	else return powsum15953(x - 1) + pow(2, x);
}