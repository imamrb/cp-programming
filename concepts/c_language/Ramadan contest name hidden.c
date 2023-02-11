#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char name1[110], name2[110];
    int T, i, p, n, check ;
    int arr[125], arr2[125];

    scanf("%d", &T);
    getchar();
    for(n=1; n<=T; n++){
        gets(name1);
        gets(name2);
        for(i=97; i<=122; i++){
            arr[i] = 0;
            arr2[i] = 0;
        }
        for(i=0; name1[i]; i++){
            if(isalpha(name1[i])){
               p = tolower(name1[i]);
                    arr[p]++;
            }
        }
        for(i=0; name2[i]; i++){
            if(isalpha(name2[i])){
                p = tolower(name2[i]);
                arr2[p]++;
            }
        }
        check = 0;
        for(i=97; i<=122; i++){
            if(arr[i]!=arr2[i]){
                check = 1;
                break;
            }
        }
        printf("Case %d: ", n);
        if(check==0) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
