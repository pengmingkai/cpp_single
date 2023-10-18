//https://vjudge.net/contest/586772#problem/B
#include <iostream>
using namespace std;

int n;
long long a, b, ans = 0;
string s;

int main() {
	cin >> n >> a >> b >> s;
	for (int j = 0; j < n / 2; j++)
		if (s[j] != s[n - 1 - j])
			ans += b;
	for (int i = 1; i < n; i++) {
		long long temp = a * i;
		for (int j = 0; j < n / 2; j++)
			if (s[(j + i) % n] != s[(n - 1 - j + i) % n])
				temp += b;
		ans = min(temp, ans);
	}
	cout << ans;
	return 0;
}