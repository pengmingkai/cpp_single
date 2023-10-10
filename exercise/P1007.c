#include <stdio.h>

int main() {
    int ans1=0,ans2=0,l,n,i=0;
    scanf("%d%d",&l,&n);
    int a[n],b[l];
    for(;i<l;i++)
        b[i]=0;
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        if(a[i]<=l/2+0.5) {
            if(a[i]>ans1) ans1=a[i];
            if(l+1-a[i]>ans2) ans2=l+1-a[i];
        }
        if(a[i]>l/2+0.5) {
            if(a[i]>ans2) ans2=a[i];
            if(l+1-a[i]>ans1) ans1=l+1-a[i];
        }
    }
    printf("%d %d",ans1,ans2);
    return 0;
}