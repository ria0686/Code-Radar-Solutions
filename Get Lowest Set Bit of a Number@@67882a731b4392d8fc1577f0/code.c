#include <stdio.h>

int main() {
    int num;
    
    
    scanf("%d", &num);
    
    int lowestSetBit = num & -num;  
    
    printf("%d",num);
    
    return 0;
}
