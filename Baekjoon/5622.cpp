#include <iostream>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int num[26] = 
	{	2,2,2, 
		3,3,3, 
		4,4,4, 
		5,5,5, 
		6,6,6, 
		7,7,7,7, 
		8,8,8, 
		9,9,9,9
	};

	int result;
	char s[16] = { 0, };
	
	result = 0;

	cin >> s;

	for (int i = 0; s[i] != '\0'; i++) {
		int index;
		index = s[i] - 'A';

		result += num[index] + 1;
	}

	cout << result << '\n';

	return 0;
}