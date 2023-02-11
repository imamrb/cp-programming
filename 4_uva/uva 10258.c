#include <stdio.h>

int main()
{
    int T, i , j, c;
    int ct[100], pm[100], tm[100];
    char lr[100];

    scanf("%d", &T);
    while(T--){
        i = 0;
        getchar();
        while(scanf("%d %d %d %c", &ct[i], &pm[i], &tm[i], &lr[i])!=EOF){
            i++;
        }
        for(j=0; j<i; j++){
            for(c=j; c<i; c++){
                if(ct[j]==ct[c]){
                    if(pm[j]==pm[c]){
                        if(lr[j]=='C'||lr[c]=='C'){
                            correct = 1;
                        }
                        if(correct==1)
                    }
                }
            }
        }
    }
}
