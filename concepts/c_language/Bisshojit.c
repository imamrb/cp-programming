#include <stdio.h>

int main()
{
    int N, step, hh1, hh2, mm1, mm2, ss1, ss2;

    scanf("%d", &N);
    while(N--) {
    scanf("%d %d %d", &hh1, &mm1, &ss1);
    scanf("%d %d %d", &hh2, &mm2, &ss2);
    scanf("%d", &step);
    int minutes=0, seconds = 0, time,hour;

        if(hh1!=hh2) {
            while(hh1!=hh2){
                    ++mm1;
                    ++minutes;
                    if(mm1==60){
                        ++hh1;
                        mm1=00;
                        if(hh1==24) hh1=00;
                    }
                }
                minutes+=mm2;
            }
        else {
            minutes = mm2 - mm1;
        }
        if(ss1>ss2) {
          seconds=(60-ss1)+ss2;
          --minutes;
       }
       else seconds = ss2 - ss1;

       hour = minutes/60;
       printf("Walking time: %dhr %dmins %dsecs\n", hour, minutes-hour*60, seconds);
       time = (minutes*60) + seconds;
       printf("Tiles passed: %d\n", time*step);
    }
    return 0;
}
