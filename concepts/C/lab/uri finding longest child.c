#include <stdio.h>

int main()
{
    char a[5000],b[5000];
    int count=0, i, j,k;

    scanf("%s", a);
    scanf("%s", b);
    getchar();
    for(i=0; a[i]!='\0'; i++){
        for(j=0; b[j]!='\0'; j++){
            if(a[i]==b[j] && i<=j) {
                if(j<k) {
                    count = 0;
                }
                ++count;
                k = j;
            }
        }
    }
    printf("%d", count);
}
