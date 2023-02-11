#include <stdio.h>
#include <string.h>
#include <ctype.h>
void main()
{
    char s[100];
    char lower[26]="abcdefghijklmnopqrstuvwxyz";
    int i,j,k,x=0,length;
    gets(s);
    length=strlen(s);
    for(i=0;i<length;i++){
        for(j=i+1;j<length;){
            if((tolower(s[i]))==(tolower(s[j]))){
                for(k=j;k<length;k++){
                    s[k]=tolower(s[k+1]);
                }
                length--;
            }
            else
                j++;
        }
    }
    for(i=0;i<length;i++){
        for(j=0;j<=25;j++){
            if(tolower(s[i])==lower[j])
                x++;
        }
    }
    if(x==26)
        printf("pangram");
    else
        printf("not pangram");
    return 0;
}
