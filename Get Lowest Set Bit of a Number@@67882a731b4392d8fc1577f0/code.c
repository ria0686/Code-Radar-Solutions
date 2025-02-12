#include <stdio.h>

int main() {
    int num,count=0;
    
    
    scanf("%d", &num);
    
    while(num!=0)
    {
        a=a>>1;
        if(a&1==1)
        {
            break;
        }
        count++;
    }
    
    printf("%d",count);
    
    return 0;
}
