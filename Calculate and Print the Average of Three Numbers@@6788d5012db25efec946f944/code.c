#include <stdio.h>



float main() {
    int a,b,c,total;
    float avg;
    scanf("%d %d %d",&a,&b,&c);
    total=a+b+c;
    avg=total/3.0;
    printf("Average: %.2f",avg);
    return 0;
}