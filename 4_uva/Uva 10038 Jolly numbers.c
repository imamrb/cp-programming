#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, check, k, m, a;
    int arr[3000], diff[3000];

    while(scanf("%d", &n)==1){
        check = 0;
        m = 0;
        for(i=0; i<n; i++){
            scanf("%d", &arr[i]);
        }
        for(i=0; i<n-1; i++){
            k = abs(arr[i+1]-arr[i]);
            if(k>n-1) {
                check = 1;
                break;
            }
            diff[m] = k;
            ++m;
        }
        if(check==0){
            for(j=0; j<m-1; j++){
                for(a=j+1; a<m; a++){
                    if(diff[j]==diff[a]){
                        check = 1;
                        break;
                    }
                }
            }
        }
        if(check == 0) printf("Jolly\n");
        else printf("Not jolly\n");
    }

    return 0;
}
