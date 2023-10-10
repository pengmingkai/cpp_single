#include <iostream>
#include <string>
using namespace std;

int a, b, m, n;
bool whether[21][21];

long long explore(int x, int y) {
	cout<<x<<','<<y<<endl; 
	if (x == 0 && y == 0)
		return 1;
	long long way=0;
	if (x - 1 >= 0 && whether[x - 1][y] == 1)
		way+=explore(x - 1, y);
	if (y - 1 >= 0 && whether[x][y - 1] == 1)
		way+=explore(x, y - 1);
	return way;
}

int main() {
	for (int i = 0; i < 21; i++)
		for (int j = 0; j < 21; j++)
			whether[i][j] = 1;
	cin >> m >> n >> a >> b;
	whether[a][b] = 0;
	if (a + 2 <= m && b + 1 <= n)
		whether[a + 2][b + 1] = 0;
	if (a + 1 <= m && b + 2 <= n)
		whether[a + 1][b + 2] = 0;
	if (a - 2 >= 0 && b + 1 <= n)
		whether[a - 2][b + 1] = 0;
	if (a + 2 <= m && b - 1 >= 0)
		whether[a + 2][b - 1] = 0;
	if (a - 1 >= 0 && b - 2 >= 0)
		whether[a - 1][b - 2] = 0;
	if (a - 2 >= 0 && b - 1 >= 0)
		whether[a - 2][b - 1] = 0;
	if (a - 1 >= 0 && b + 2 <= n)
		whether[a - 1][b + 2] = 0;
	if (a + 1 <= m && b - 2 >= 0)
		whether[a + 1][b - 2] = 0;
	long long ans;
	ans=explore(m, n);
	cout << ans;
	return 0;
}
