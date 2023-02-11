#include<stdio.h>
int main()
{
    int temp, i, j, limit, sum = 0, position;
     float average_wait_time, average_turnaround_time;
    int burst_time[20], process[20], waiting_time[20], turnaround_time[20];
    printf("\nEnter Total Number of Processes:\t");
     scanf("%d", &limit);
     for(i = 0; i < limit; i++)
     {
         printf("Enter Burst Time For Process[%d]:\t", i + 1);
        scanf("%d", &burst_time[i]);
        process[i] = i + 1;
    }
     for(i = 0; i < limit; i++)
     {
         position = i;
         for(j = i + 1; j < limit; j++)
         {
             if(burst_time[j] < burst_time[position])
                {
                       position = j;
            }
         }
        temp = burst_time[i];
         burst_time[i] = burst_time[position];
         burst_time[position] = temp;
        temp = process[i];
         process[i] = process[position];
         process[position] = temp;
     }
     waiting_time[0] = 0;
     for(i = 1; i < limit; i++)
     {
         waiting_time[i] = 0;
         for(j = 0; j < i; j++)
            {
            waiting_time[i] = waiting_time[i] + burst_time[j];
        }
         sum = sum + waiting_time[i];
     }
     average_wait_time = (float)sum / limit;
     sum = 0;
     printf("\nProcess ID\t\tBurst Time\t Waiting Time\t Turnaround Time\n");
     for(i = 0; i < limit; i++)
     {
         turnaround_time[i] = burst_time[i] + waiting_time[i];
         sum = sum + turnaround_time[i];
         printf("\nProcess[%d]\t\t%d\t\t %d\t\t %d\n", process[i], burst_time[i], waiting_time[i], turnaround_time[i]);
     }
     average_turnaround_time = (float)sum / limit;
     printf("\nAverage Waiting Time:\t%f\n", average_wait_time);
     printf("\nAverage Turnaround Time:\t%f\n", average_turnaround_time);
    return 0;
}
