// Your code here...
#include <stdio.h>

int main(){
  unsigned int a,count = 1;
  scanf("%lu",&a);
  if(a==0)
  {
    count=0;
  } 
  else
  {
    while(a!=0){
        if(a==1)
        {
            break;
        }
        a = a>>1;
        count++;
    }
  } 
  printf("%d",32-count);
  return 0;
}