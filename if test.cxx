#include<stdio.h>
 int main()
{
printf("Enter two  number");
int a,b;
scanf("%d%d",&a,&b);
if(a<b){
    printf(" %d is bigger",b);
}else{
    printf("%d is smaller",b);
}
return 0;
}