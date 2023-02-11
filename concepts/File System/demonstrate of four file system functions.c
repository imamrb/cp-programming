#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[80] = "This is a file system test.\n";
    FILE *fp;
    char *p;
    int i;

    if((fp = fopen("myfile", "w"))==NULL){
        printf("Can not open file!\n");
        exit(1);
    }
    else printf("Success opening file 'myfile'\n");

    p = str;

    while(*p){
        if(fputc(*p, fp)==EOF){
            printf("Error writing file.\n");
            exit(1);
        }
        p++;
    }
    fclose(fp);

    if((fp = fopen("myfile", "r"))==NULL){
        printf("Can not open file.\n");
        exit(1);
    }

    for( ; ; ){
        i = fgetc(fp);
        if(i==EOF) break;
        putchar(i);
    }
    fclose(fp);

    return 0;
}
