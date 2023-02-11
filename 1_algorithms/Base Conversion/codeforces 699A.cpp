#include<bits/stdc++.h>
#define N 200000
#define i64 long long
using namespace std;
int main()
{
    i64 ans[N] ,n,min,sub,j , num,count;
    char str[N+1];
    scanf("%I64d",&n);
    scanf("%s",str);
    count = 0;
    j = -1 ;
    sub = 0;
    for(int i=0;i<n;i++){
        scanf("%I64d",&num);
        if(str[i]=='R')
            j= num;
        else if(str[i]=='L' && num>j &&j!=-1){
                count++;

            sub = (num - j)/2;
            if(count==1)
                min = sub;
            if(sub<min)
            min = sub;
        }
    }
    if(count!=0)
    printf("%I64d\n",min);
    else
        printf("-1\n");
    return 0;
}

