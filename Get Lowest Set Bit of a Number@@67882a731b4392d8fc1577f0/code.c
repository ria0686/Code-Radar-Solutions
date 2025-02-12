#include <stdio.h>

int main() {
    int num,count=0;
    scanf("%d", &num);
    while(num!=0)
    {
        num=num>>1;
        if(num&1==1)
        {
            break;
        }
        count++;
    }
    printf("%d",count);
    return 0;
}
