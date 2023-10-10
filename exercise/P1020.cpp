#include <iostream>
#include <cmath>
using namespace std;

int a[10000], n = 0, i, temp = 0, temp2 = 0, ansm = 0, ans = 0;

void explore(int x,int y) {
	ansm = max(y, ansm);
	for (int j = x+1; j < i; j++) {
		if (a[j] <= a[x])
			explore(j, y + 1);
	}
}

int main() {
	while (cin >> i)
		a[n++] = i;
	for (i = 0; i < n; i++) {
		if (a[i] > temp) {
			
			temp2 = i;
			ans++;
			ansm = max(i - temp2 + 1  , ansm);
		}
		temp = a[i];
	}
	ansm = max(i - temp2 , ansm);
	for (int k = 0; k < i; k++)
		explore(k, 1);
	cout << ansm << endl << ans;
	return 0;
}