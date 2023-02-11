#include <stdio.h>

int main()
{
    char seats[1002][5];
    int n, i, check;

    scanf("%d", &n);

    for(i=0; i<n; i++){
        getchar();
        scanf("%c %c %*c %c %c",&seats[i][0], &seats[i][1], &seats[i][2] , &seats[i][3]);
    }
    check = 0;
    for(i=0; i<n; i++){
        if(seats[i][0]=='O' && seats[i][1]=='O'){
            check = 1;
            seats[i][0] = '+';
            seats[i][1] = '+';
            break;
        }
        else if(seats[i][2]=='O' && seats[i][3]=='O'){
            check = 1;
            seats[i][2] = '+';
            seats[i][3] = '+';
            break;
        }
    }
    if(check){
        printf("YES\n");
        for(i=0; i<n; i++){
            printf("%c%c%c%c%c\n",seats[i][0], seats[i][1],'|',seats[i][2] , seats[i][3]);
        }
    }
    else printf("NO\n");

    return 0;
}
