#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
using std::cout;

string s;
char v;
double ans;
int a[2] = { 0,0 }, n[2] = { 0,0 }, flag = 0, leftOrRight = 0, j = 0;

int main() {
	/*
	double num1, num2;
	char op;
	cin >> op >> num1 >> num2;
	if (op != '+' && op != '-' && op != '*' && op != '/') {
		cout << op << "是无效运算符！" << endl;
		return 0;
	}
	cout << num1 << op << num2 << '=';
	switch (op) {
	case'+':cout << num1 + num2; break;
	case'-':cout << num1 - num2; break;
	case'*':cout << num1 * num2; break;
	case'/':cout << num1 / num2;
	}
	cout << endl;
	*/
	cin >> s;
	int i;
	for (i = 0; s[i] != '\0'; i++) {
		if (s[i] == '-' || s[i] == '+' || s[i] == '=') {
			j = i - 1;
			if (s[j] < '0' || s[j]>'9') {
				if (j - 1 < 0) {
					v = s[j];
					a[leftOrRight]++;
				}
				else if (s[j - 1] == '+' || s[j - 1] == '=')
					a[leftOrRight]++;
				else if (s[j - 1] == '-')
					a[leftOrRight]--;
				else {
					v = s[j];
					j--;
					int temp = 0;
					for (int k = 0; j >= flag; j--, k++)
						temp += (int)pow(10, k) * (s[j] - 48);
					if (j < 0) a[leftOrRight] += temp;
					else
						switch (s[j]) {
						case'=':
						case '+':a[leftOrRight] += 2 * temp;
						case '-':a[leftOrRight] -= temp;
						}
				}
			}
			else {
				int temp = 0;
				for (int k = 0; j >= flag; j--, k++) {
					temp += (int)pow(10, k) * (s[j] - 48);

				}
				if (j < 0) n[leftOrRight] += temp;
				else
					switch (s[j]) {
					case'=':
					case '+':n[leftOrRight] += 2 * temp;
					case '-':n[leftOrRight] -= temp;
					}
			}
			flag = i + 1;
		}
		if (s[i] == '=')
			leftOrRight++;
	}
	j = i - 1;
	if (s[j] < '0' || s[j]>'9') {
		if (j - 1 < 0) {
			v = s[j];
			a[leftOrRight]++;
		}
		else if (s[j - 1] == '+' || s[j - 1] == '=')
			a[leftOrRight]++;
		else if (s[j - 1] == '-')
			a[leftOrRight]--;
		else {
			j--;
			int temp = 0;
			for (int k = 0; j >= flag; j--, k++)
				temp += (int)pow(10, k) * (s[j] - 48);
			if (j < 0) a[leftOrRight] += temp;
			else
				switch (s[j]) {
				case'=':
				case '+':a[leftOrRight] += 2 * temp;
				case '-':a[leftOrRight] -= temp;
				}
		}
	}
	else {
		int temp = 0;
		for (int k = 0; j >= flag; j--, k++) {
			temp += (int)pow(10, k) * (s[j] - 48);

		}
		if (j < 0) n[leftOrRight] += temp;
		else
			switch (s[j]) {
			case'=':
			case '+':n[leftOrRight] += 2 * temp;
			case '-':n[leftOrRight] -= temp;
			}
	}
	flag = i + 1;
	ans = (double)(n[1] - n[0]) / (a[0] - a[1]);
	cout << v << '=' << fixed << setprecision(3) << ans;
	return 0;
}