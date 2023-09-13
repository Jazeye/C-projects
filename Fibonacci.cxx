#include<stdio.h>
 int main()
{
int i,a=0,b=1,n,temp;
printf("Enter a number:");
scanf("%d",&n);
printf("%d",a);
for( i = 1;i <= n; i++){
    printf("%d",b);
    temp=b;
    b=a+b;
    a=temp;
}

return 0;
}