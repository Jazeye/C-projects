#include <stdio.h>
void main()
{
    int a,b,sum=0,i,rev[10];

    printf("Input a number: ");
    scanf("%d",&a);

    for(i=a;a!=0;a=a/10){
         
         b=a % 10;
    rev[i]=b;
         sum=sum*10+b
    }
printf("The number in reverse order is : %d \n",sum);
for(i=0;i<a;i++)
{
    printf("%d",rev[i]);
}
}
