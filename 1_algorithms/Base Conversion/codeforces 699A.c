#include<bits/stdc++.h>
using namespace std;
#define N 200000
int main()
{
    int ans[N] ,n,min,sub,j;
    char str[N+1];
    scanf("%d",&n);
    scanf("%s",&str);
    min =0;
    for(int i=0;i<n;i++){
        scanf("%d",&num);
        if(str[i]=='R')
            j= num;
        if(str[i]=='L' && num>j)
            sub = (num - j)/2;
        if(sub<min)
            min = sub;
    }
    printf("%d\n",min);
}

