// Your code here...
#include <stdio.h>

int main(){
  int a,count;
  scanf("%d",&a);
  if(a=0)
  {
    count=0;
  } 
  else
  {
    while(a!=0){
        count++;
        if(a|1==1)
        {
            break;
        }
        a = a>>1;
    }
  } 
  printf("%d",32-count);
  return 0;
}