#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char a[5000],b[5000];
    int count=0, i, j,k,length_1, length_2;

    scanf("%s", a);
    scanf("%s", b);
    getchar();
    length_1=strlen(a);
    length_2=strlen(b);
    if(length_1<=5000&&length_2<=5000){
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
    }
    printf("%d", count);

    return 0;
}
