// Your code here...
#include <stdio.h>

int main() {
    int num,count=0;
    scanf("%d", &num);
    while(num!=0)
    {
        
        if(num&1==1)
        {
            break;
        }
         num=num>>1;
        count++;
    }
    printf("%d",count);
    return 0;
}