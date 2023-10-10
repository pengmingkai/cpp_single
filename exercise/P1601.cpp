#include <iostream>
#include <cmath>
#define weishu 100000
using namespace std;

int num[2][weishu];

void fresh(int* p) {
	for (int i = 0; i < weishu - 1; i++)
		while (*(p + i) > 9) {
			(*(p + i + 1))++;
			(*(p + i)) -= 10;
		}
	return;
}

int intadd(int* p) {
	int ans = 0;
	for (int i = 0; i < 10; i++)
		ans += *p / (int)pow(10, i) - *p / (int)pow(10, i + 1) * 10;
	return ans;
}

int add(int* p) {
	int ans = 0;
	for (int i = 0; i < weishu; i++)
		ans += *(p + i);
	return ans;
}

void multiply(int* p1, int* p2, int* ans) {
	int temp[weishu], i;
	for (i = 0; i < weishu; i++)
		temp[i] = 0;
	for (i = 0; i < weishu; i++) {
		if (*(p1 + i) == 0)continue;
		for (int j = 0; j < weishu; j++) {
			if (*(p2 + j) == 0)continue;
			temp[i + j] += *(p1 + i) * *(p2 + j);
		}
		fresh(&temp[0]);
	}
	for (i = 0; i < weishu; i++)
		*(ans + i) = temp[i];
	return;
}

void inject(string s, int* p) {
	int i;
	for (i = 0; s[i] != '\0'; i++)
		*(p + i) = s[i] - 48;
	for (; i < weishu; i++)
		*(p + i) = 0;
	return;
}

void input() {
	string s;
	for (int i = 0; i < 2; i++) {
		cin >> s;
		inject(s, &num[i][0]);
	}
	return;
}

int main() {
	input();
	multiply(&num[0][0], &num[1][0], &num[0][0]);
	int ans = add(&num[0][0]);
	for (int i = 0; i < 5; i++)
		ans = intadd(&ans);
	cout << ans;
	return 0;
}