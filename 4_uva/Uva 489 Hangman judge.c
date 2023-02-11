#include <stdio.h>

int main()
{
    int arr[125];
    char guess[100],input[100], ch;
    int word, match, wrong , i, j, n;

    while(scanf("%d", &n) && n>0){
        for(i=97; i<=122; i++)
            arr [i] = 0;

        word = 0;
        match = 0;
        wrong = 0;
        getchar();
        while((ch=getchar())!='\n')
            arr[ch] = 1;
        for(i=97; i<=122; i++)
            if(arr[i]==1) ++word;

        gets(guess);
        for(j=0; guess[j]; j++){
            if(arr[guess[j]]==1){
                arr[guess[j]]++;
                ++match;
                if(match==word) break;
            }
            else if(arr[guess[j]]==0){
                arr[guess[j]]=2;
                ++wrong;
                if(wrong==7) break;
            }
        }
        printf("Round %d\n", n);
        if(match==word) printf("You win.\n");
        else if(wrong<7) printf("You chickened out.\n");
        else printf("You lose.\n");
    }
}
