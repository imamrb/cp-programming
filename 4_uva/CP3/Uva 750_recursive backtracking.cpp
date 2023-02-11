#include<bits/stdc++.h>
using namespace std;

int row[8], TC, a, b, linecounter;
void backtrack(int c){
    if(c==8 && row[b]==a){
        printf("%2d     %d", ++linecounter, row[0]+1);
    }
}
int main()
{
    scanf("%d", &TC);

    while(TC--){
        scanf("%d %d", &a, &b);
        memset(row, 0, sizeof row);
        linecouter = 0;
        printf("SOLN       COLUMN\n");
        printf(" #      1 2 3 4 5 6 7 8\n\n");

        backtrack(0);
        if(TC) printf("\n");
    }

    return 0;
}
