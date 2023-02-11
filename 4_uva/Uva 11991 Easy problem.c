#include <stdio.h>

int main()
{
    int arr[100000];
    int n, m, k, v, i, j,count;

    while(scanf("%d %d", &n, &m)!=EOF){
        for(i=0; i<n; i++){
            scanf("%d", &arr[i]);
        }
        for(j=0; j<m; j++){
            scanf("%d %d", &k, &v);
            count = 0;
            i = 0;
            while(count<k && i<n){
                if(arr[i]==v) ++count;
                ++i;
            }
            if(count==k) printf("%d\n", i);
            else printf("0\n");
        }
    }
    return 0;
}
