#include <stdio.h>
#include<string.h>

int main()
{
    char str[1000];
    int i , j , num;
    int p=0,q=0,r=0;

    scanf("%d", &num);
    getchar();
    for(i=0; i<num; i++) {
        gets(str);
        for(j=0; str[j]!='\0'; j++) {
            if(str[j]=='o'||str[j]=='n'||str[j]=='e') {
                ++p;
                if(p==2) printf("1\n");
            }
            if(str[j]=='t'||str[j]=='w'||str[j]=='o'){
                ++q;
                if(q==2) printf("2\n");
            }
            if(str[j]=='t'||str[j]=='h'||str[j]=='r'||str[j]=='e') {
                ++r;
                if(r==3) printf("3\n");
            }
        }
    }
    return 0;
}
