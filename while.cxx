#include <stdio.h>

int main() 
{
  int a,b;
scanf("%d",&a);
int i=1;
  
  while (i <=10) {
    b = a * i;
     printf("%d×%d=%d\n",a,i,b);
    i++;
  }
  
  return 0;
}