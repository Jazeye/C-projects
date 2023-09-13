#include<stdio.h>
int main() 
{
  int n,a,i,x,k=0,sum=0,rw[10];
  printf("Enter a number");
scanf("%d",&n);
x=n;
  
  while (x>0)
   {
    a=x%10;
    sum=sum+a;
    rw[k]=a;
    k++;
  }
   printf("sum of digital %d is %d",n,sum);
    printf("Reverse of %d",n);
    for (i=0;i<k;i++)
    {
         printf("%d",rw[i]);
        }
  return 0;
}