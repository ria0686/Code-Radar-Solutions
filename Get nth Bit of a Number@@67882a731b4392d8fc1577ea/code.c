#include <stdio.h>



int main() {
    int a,b,c;
    scanf("%d %d",&a,&b)
    c=a>>b;
    if(c&1==1)
    printf("%d",1);
    else
    printf("%d",0);
    return 0;
}