#include <stdio.h>
#define Max 100

int main()
{
     long int N, i;
     int j, k;
     long int arr[Max];

    while(scanf("%ld", &N)==1 && N!=0){
        for(i=0; i<Max; i++){
            arr[i] = 0;
        }
        for(i=0; i<N; i++){
            scanf("%d", &j);
            arr[j]++;
        }
        k = 0;
        for(i=0; i<Max; i++){
            for(j=0; j<arr[i]; j++){
                ++k;
                if(k<N) printf("%d ", i);
                else printf("%d\n", i);
            }
        }
    }
    return 0;
}
