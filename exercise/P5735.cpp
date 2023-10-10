#include <iostream>
//#include <algorithm>
#include <cmath>
#include <iomanip>
#define ll long long
using namespace std;

int main() {
    float a[3],b[3],ans=0;
    for(int i=0;i<3;i++)
        cin>>a[i]>>b[i];
    for(int i=0;i<3;i++)
        for(int j=i+1;j<3;j++)
            ans+=pow(pow(a[i]-a[j],2)+pow(b[i]-b[j],2),0.5);
    cout<<fixed<<setprecision(2)<<round(ans*100)/100;
    return 0;
}
