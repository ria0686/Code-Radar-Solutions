#include <stdio.h>



int main() {
    int age;
    char name[50],hobby[50];
    scanf("%s %i %s",name,&age,hobby);
    printf("Name: %s\n",name);
    printf("Age: %i\n",age);
    printf("Hobby: %s",hobby);

    return 0;
}