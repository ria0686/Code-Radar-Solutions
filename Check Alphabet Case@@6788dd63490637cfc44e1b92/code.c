// Your code here...
#include <stdio.h>

int main()
{
    char x;
    scanf("%c",&x);
    if(x>=65 && x<=91)
    {
        printf("Uppercase");
    }
    else if(x>=97 && x<=112)
    {
        printf("Lowercase");
    }
    else
    {
        printf("Not an alphabet");
    }
}