#include <stdio.h>
#include <stdlib.h>
typedef long long ll;

int main()
{
    ll arr[505][505],sum[505], d, primary, secondary, store, q, zero;
    int i, j, r, c, check, n;

    scanf("%d", &n);
    for(i=0; i<n; i++){
        sum[i] = 0;
        for(j=0; j<n; j++){
            scanf("%I64d", &arr[i][j]);
            if(arr[i][j]==0){
                r = i;
                c = j;
            }
            sum[i]+=arr[i][j];
        }
    }
    check = 1;
    zero = sum[r];
    if(n>1){
        if(r==0) store = sum[r+1];
        else store = sum[r-1];

        d = (store - zero);
        if(d<=0){
            check = 0;
        }
        arr[r][c] = d;
        sum[r]+=d;
        if(check){
            for(i=0; i<n; i++){
                if(sum[i]!=store){
                    check = 0;
                    break;
                }
            }
        }
        if(check){
            for(i=0; i<n; i++){
                q = 0;
                for(j=0; j<n; j++){
                    q += arr[j][i];
                }
                if(q!=store){
                    check = 0;
                    break;
                }
            }
        }
        if(check){
            primary = secondary = 0;
            for(i=0; i<n; i++){
                primary += arr[i][i];
                secondary += arr[i][n-i-1];
            }
            if(primary==secondary){
                if(primary==store){
                    check = 1;
                }
                else check = 0;
            }
            else check = 0;
        }
    }
    else{
        check = 1;
        d = rand();
    }
    if(check) printf("%I64d\n", d);
    else printf("-1\n");

    return 0;

}
