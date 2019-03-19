#include <stdio.h>

void main (void){
    int N, i = 0;
    float min = 0.;
    printf("Vvedite razmernost' massiva\n");
    scanf("%d", &N);
    float a[N];

    while(i < N){
        printf("Vvedite a[%d]", i+1);
        scanf("%f", &a[i]);
        if(a[i]>0)
            min = a[i];
        i++;
    }

    i = 0;
    while(i < N){
        if(a[i] < min && a[i] > 0)
            min = a[i];
        i++;
    }

    if(min==0.)
        printf("Takih chisel ne sushchestvuet");
    else
        printf("min = %f", min);
}
