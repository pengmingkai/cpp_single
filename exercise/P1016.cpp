#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
//Ì°ÐÄ
int i=1;
float d1,c,d2,p0,n,ans,d[8],p[7];

void explore() {
    
}

int main() {
    cin>>d1>>c>>d2>>p[0]>>n;
    d[0]=0;
    for(;i<=n;i++)
        cin>>d[i]>>p[i];
    d[i]=d1;
    for(i=0;i<=n;i++)
        if(c*d2<d[i+1]-d[i]) {
            cout<<"No Solution";
            return 0;
        }
    
    cout<<round(ans*100)/100
    return 0;
}
