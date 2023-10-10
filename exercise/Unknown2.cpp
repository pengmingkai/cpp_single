#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

string s[20];
int n, start;

bool compare(int i, int j, int m, int n) {
	if (s[i][m] > s[j][n])
		return 0;
	else if (s[i][m] < s[j][n])
		return 1;
	else if (s[i][m + 1] != '\0' && s[j][n + 1] != '\0')
		return compare(i, j, m + 1, n + 1);
	else {
		int temp = (sizeof(s[i]) > sizeof(s[j])) ? i : j;
		for (int k = start + 1; k < n; k++) {
			if (k == i || k == j)
				continue;
			else if (s[temp][m] < s[k][0])
				return compare(temp, k, m, 0);
		}
		return 0;
	}
}

int main() {
	int i;
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> s[i];
	for (i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++) {
			start = i;
			if (compare(i, j, 0, 0)) {
				string temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	for (i = 0; i < n; i++)
		cout << s[i];
	return 0;
}