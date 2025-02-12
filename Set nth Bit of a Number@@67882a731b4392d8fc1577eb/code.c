// Your code here...
#include <stdio.h>

int main()
{
    int a,b,c,d;
    scanf("%d %d",&a,&b);
    c = a^(1<<b);
    if(c<a)
    printf("%d",a^(1<<b));
    else
    printf("%d",a);
    return 0;
}
