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
        if(a|1==1)
        {
            break;
        }
        a = a>>1;
        count++;
    }
  } 
  printf("%d",count);
  return 0;
}