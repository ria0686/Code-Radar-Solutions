// Your code here...
#include <stdio.h>
int main()
{
    int a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    switch(c)
    {
        case '+':print("%d",a+b);break;
        case '-':print("%d",a-b);break;
        case '*':print("%d",a*b);break;
        case '/':print("%d",a/b);break;
        
    }
}