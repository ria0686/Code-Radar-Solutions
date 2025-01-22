#include <stdio.h>



int main() {
    int age;
    char name[50],hobby[50];
    scanf("%c %i %c",&name,&age,&hobby);
    printf("Name: %c\n",name);
    printf("Age: %i\n",age);
    printf("Hobby: %c",hobby);

    return 0;
}