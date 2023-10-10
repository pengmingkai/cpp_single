#include <iostream>
using namespace std;

int ans = 0, n, k;

void explore(int last, int left, int floor) {
	if (last > left);
	else if (floor == k)
		ans++;
	else {
		left -= last;
		for (int i = last; left >= 0; i++, left--)
			explore(i, left, floor + 1);
	}
	return;
}

int main() {
	cin >> n >> k;
	explore(1, n, 1);
	cout << ans;
	return 0;
}