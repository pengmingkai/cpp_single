#include <stdio.h>

int j,m,n;
int t[10000],ans[10000];

void times(int h) {
    for(n=0;n<10000;n++)
        t[n]*=h;
    for(n=0;n<10000;n++)
        while(t[n]>9) {
            t[n]=t[n]-10;
            t[n+1]++;
        }
    return;
}

void plus() {
    for(j=0;j<10000;j++) {
        ans[j]+=t[j];
        while(ans[j]>9) {
            ans[j]-=10;
            ans[j+1]++;
        }
    }
    return;
}

int main() {
    for(j=0;j<10000;j++) {
        ans[j]=0;
        t[j]=0;
    }
    t[0]=1;
    scanf("%d",&m);
    for(int i=1;i<=m;i++) {
        for(j=0;j<10000;j++)
            t[j]=0;
        t[0]=1;
        for(j=2;j<=i;j++)
            times(j);
        plus();
    }
    m=0;
    j=9999;
    /*while(ans[j]==0) 
        j--;
    while(j>=0) {
        printf("%d",ans[j]);
        j--;
    }上面这个输出效率比下面的高*/
    printf("\n");
    for(j=9999;j>=0;j--) {
        if(m==0) {
            if(ans[j]!=0) {
                printf("%d",ans[j]);
             m=1;
        }}//若无花括号，else与最近的if配对
        else if(m!=0)
            printf("%d",ans[j]);
    }
    return 0;
}