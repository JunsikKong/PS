#include <iostream>
#include <string>

using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	string n = "";
	int size, flag, result;

	getline(cin, n);

	size = n.size();

	flag = 0; //0일때 공백, 1일때 문자
	result = 0;

	for (int i = 0; i < size; i++) {
		if (flag == 0) {
			if (n[i] != ' ') {
				flag = 1;
				result++;
			}
		}
		else {
			if (n[i] == ' ') {
				flag = 0;
			}
		}
	}
	
	cout << result << '\n';

	return 0;
}