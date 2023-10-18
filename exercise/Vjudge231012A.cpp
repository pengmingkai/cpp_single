//https://vjudge.net/contest/587177#problem/A
#include <iostream>
using namespace std;

int n, m, ans = 0;
char s[1000][7], t[1000][4];

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> s[i];
	for (int i = 0; i < m; i++)
		cin >> t[i];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (s[i][3] == t[j][0]
				&& s[i][4] == t[j][1]
				&& s[i][5] == t[j][2]) {
				ans++;
				break;
			}
	cout << ans;
	return 0;
}