#include <stdio.h>
#include <string.h>

char steps[2001];
int sequence(int d);

int main()
{

    int T, i, len, d, r, diff, count;

    scanf("%d", &T);
    getchar();
    while(T--){
        gets(steps);
        len = strlen(steps);
        d = len / 2;
        r = sequence(d);

        diff = len - r*2;
        count = 0;
        for(i=diff; count<8; ){
            printf("%c", steps[i]);
            ++count;
            ++i;
            if(i==r) i = 0;
        }
        printf("...\n");
    }
    return 0;
}
int sequence(int d)
{
    int j, i;
    char part1[1000], part2[1000];
    j = 0;
    for(i=0; i<d; i++){
        part1[j] = steps[i];
        part2[j] = steps[i+d];
        ++j;
    }
    part1[j] = '\0';
    part2[j] = '\0';
    if(strcmp(part1, part2)!=0){
            --d;
            sequence(d);
       }
    else return d;
}
