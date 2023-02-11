#include <stdio.h>
#define Max 300010
int app[Max], rem[Max];
int main()
{

    int n, q, i, j, type, x, unread, noti;

    scanf("%d %d", &n, &q);
    for(i=0; i<=n; i++){
        app[i] = 0;
        rem[i] = 0;
    }
    unread = 0;
    for(i=0; i<q; i++){
        scanf("%d %d",&type, &x);
        if(type==1){
                app[x]++;
                unread++;
                rem[x]++;
        }
        else if(type==2){
                rem[x]=0;
                unread = 0;
                for(j=0; j<=n; j++)
                    unread+=rem[j];
        }
        else {
            noti = 0;
            for(j=0; noti<x; j++){
                noti+=app[j];
                rem[j] = 0;
            }
            unread = 0;
            for(j=j-1; j<=n; j++)
                unread+=rem[j];
        }
        printf("%d %d\n\n",i+1, unread);
    }
    return 0;
}
