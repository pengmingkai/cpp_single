//https://vjudge.net/contest/586772#problem/A
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, i, j;
    string s;
    char ans[2000];
    cin >> n >> s;
    for (i = 0, j = 0; s[i] != '\0'; i++, j++)
    {
        ans[j] = s[i];
        if (s[i] == 'n' && s[i + 1] == 'a')
        {
            ans[++j] = 'y';
            ans[++j] = s[++i];
        }
    }
    ans[j] = s[i];
    cout << ans;
    return 0;
}