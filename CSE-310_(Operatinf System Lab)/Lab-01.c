#include <stdio.h>
#include <conio.h>
int main ()
{
    int b[10], n,i,j,w[10],t[10],arrive[10];
    float sum_w, sum_t,avg_w,avg_t;
    printf("Enter the Number of process: ");
    scanf("%d",&n);


    for(i=0; i<n; i++)
    {
        printf("CPU time of P%d: ", i+1);
        scanf("%d", &b[i]);
        printf("\n");


        printf("Arrive time of P%d: ", i+1);
        scanf("%d", &arrive[i]);
        printf("\n");

    }


    w[0] = 0;
    for(i=1; i<n; i++)
    {
        w[i] = w[i-1]+b[i-1];
    }

    for(i=0; i<n; i++)
    {
        w[i] = w[i]-arrive[i];
    }



    for(i=0; i<n; i++)
    {
        t[i]= w[i]+b[i];
    }




    printf("\nProcess    CPU Time   Waiting Time    Turnaround Time\n");

    for(i=0; i<n; i++)
    {
        printf("%d    \t\t%d    \t\t%d   \t\t%d\n", i+1, b[i],w[i],t[i]);
    }

    for(i =0; i<n; i++){
        sum_w = sum_w+w[i];
        sum_t=sum_t+t[i];
    }


    avg_w=sum_w/n;
    avg_t=sum_t/n;


    printf("Average Waiting Time: %.2f",avg_w);
    printf("\n\nAverage Turnaround Time: %.2f",avg_t);


    printf("Grand Chart");
    printf("\n\n");
    for(i=0; i<n; i++){
        printf("P%d   |",i+1);


    }
         printf("\n0");

         for(i=0; i<n; i++){
                printf("    %d",t[i]+arrive[i]);

         }

}
