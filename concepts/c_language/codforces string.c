#include <stdio.h>

int main()
{
    int n, i ,j, r,k, true = 0,m,p;
    int num[1000], track[1000];

    scanf("%d", &n);
    m = 0;
    for(i=1; i<=n; i++){
        k = i;
        j = 0;
        while(k!=0){
            r = k%10;
            k/=10;
            num[j] = r;
            j++;
        }
        for(p=j-1; p>=0; p--){
            track[m] = num[p];
            if(m+1==n){
                printf("%d\n", track[m]);
                true = 1;
                break;
            }
            ++m;
        }
        if(true == 1) break;
    }
    return 0;
}
