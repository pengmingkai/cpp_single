#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,a,y,b;
    cin>>x>>a>>y>>b;
    cout<<fixed<<setprecision(2)<<round((double)(a*x-y*b)/(a-b)*100)/100;
    return 0;
}