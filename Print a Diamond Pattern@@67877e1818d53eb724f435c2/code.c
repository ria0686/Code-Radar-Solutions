// Your code here...
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int space=1;space<=n-i;space++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        for(int k=2;k<=i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i=n;i>=1;i--)
    {
        for(int space=1;space<=n-i;space++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        for(int k=2;k<=i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}