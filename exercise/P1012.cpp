#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

string s[20];
int n, start;

bool size(int i, int j) {
	int tempi = 0, tempj = 0;
	for (int m = 0; s[i][m] != '\0'; m++)
		tempi++;
	for (int m = 0; s[j][m] != '\0'; m++)
		tempj++;
	if (tempj > tempi)
		return 0;
	return 1;
}

bool compare(int i, int j, int m, int n2) {
	if (s[i][m] > s[j][n2])
		return 0;
	else if (s[i][m] < s[j][n2])
		return 1;
	else if (s[i].size() > m + 1 && s[j].size() > n2 + 1)
		return compare(i, j, m + 1, n2 + 1);
	else {
		int temp = j;
		int temp2 = n2 + 1;
		if (size(i, j)) {
			temp2 = m + 1;
			temp = i;
		}
		for (int k = start; k < n; k++) {
			if (k != temp && s[temp][temp2] < s[k][0])
				return 1;
		}
		if (temp == j)
			return 1;
	}
	return 0;
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