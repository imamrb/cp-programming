#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

long int fibo[50];

void modified_fibonacci()
{
    long int a=1, b=1, c , i;
    i = 0;
    while(i<50){
        c = a + b;
        a = b;
        b = c;
        fibo[i++] = a;
    }
    return;
}
int search(long int N)
{
    int i;
    for(i=0; i<50; i++){
        if(fibo[i]==N) break;
    }
    return i;
}

int main()
{
    int position[55];
    char cipher[110],decipher[110],upper[110];
    long int T, i, j, k, n, N, max;

    modified_fibonacci();

    scanf("%ld", &T);
    while(T--){
        scanf("%ld", &n);
        memset(position ,50, sizeof(position));

        max = 0;
        for(i=0; i<n; i++){
            scanf("%ld", &N);
            k = search(N);
            position[i] = k;
            if(k>max) max = k;
        }
        getchar();
        gets(cipher);
        j = 0;
        for(i=0; cipher[i]; i++){
            if(isupper(cipher[i]))
                upper[j++] = cipher[i];
        }
        upper[j] = '\0';

        memset(decipher,' ',sizeof(decipher));

        for(i=0; upper[i]; i++){
            k = position[i];
            if(k<=max) decipher[k] = upper[i];
        }
        decipher[max+1] = '\0';
        puts(decipher);
    }
    return 0;
}
