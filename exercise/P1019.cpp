#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

bool whether=1,ifinvolved=0;
int ans=0,times[20],i,n,point,temppoint,temp;
char start;
string s[21];

void explore(string tempword) {
    ans=max(ans,point+1);
    //s[20][point+1]='\0';
    for(int j=0;j<n;j++)
        if(times[j]<2)
            for(temppoint=point,temp=0;temppoint>=0&&point-temppoint+1<s[j].size()&&point-temppoint+1<tempword.size();temppoint--)
                //检索指针与当前指针距离达到当前词汇或前序词汇的长度，停止当前词汇比对
                if(s[20][temppoint]==s[j][temp]) {
                    for(;temppoint+temp<=point;temp++)
                        if(s[20][temppoint+temp]!=s[j][temp])
                           whether=0;
                    temp=0;
                    if(whether==1) {
                        times[j]++;
                        short temppoint2=point;
                        for(int k=0;s[j][k]!='\0';k++) {
                            s[20][temppoint+k]=s[j][k];
                            point=temppoint+k;
                        }
                        explore(s[j]);
                        times[j]--;
                        point=temppoint2;
                        break;
                    }
                    else
                        whether=1;
                }
    
    return;
}

int main() {
    cin>>n;
    for(i=0;i<n;i++) {
        cin>>s[i];
        times[i]=0;
    }
    cin>>start;
    for(i=0;i<n;i++)
        if(s[i][0]==start) {
            times[i]++;
            s[20]=s[i];
            point=s[i].size()-1;
            explore(s[i]);
            times[i]--;
        }
    cout<<ans;
    return 0;
}
//还是c++比较香