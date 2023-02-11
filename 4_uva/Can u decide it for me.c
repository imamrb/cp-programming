#include <stdio.h>

int main()
{
    int T, i, check;
    int countM,countE,checkE,checkM,half,half2,half3;
    char str[100];

    scanf("%d", &T);
    getchar();
    while(T--){
        scanf("%s", str);
        checkE =0; checkM=0;
        countM =0; countE=0;
        half =0;  half2=0;
        half3 =0; check =1;

        for(i=0; str[i]; i++){
            if(str[i]=='M' || str[i]=='E'||str[i]=='?'){
                check = 1;
            }
            else {
                check = 0;
                break;
            }
            if(str[i]=='?'){
                if(checkM==0) ++half;
                else if(checkE==0) ++half2;
                else ++half3;
            }
            else if(str[i]=='M') {
                    checkM = i;
                    ++countM;
            }
            else if(str[i]=='E'){
                checkE = i;
                countE++;
            }
        }
        if(check){
            if(countM==1 && countM==countE && checkM<checkE){
                if(half && half2 && half3 && half+half2==half3)
                    check = 1;
                else check = 0;
            }
            else check = 0;
        }
        if(check==1) printf("theorem\n");
        else printf("no-theorem\n");
    }
    return 0;
}
