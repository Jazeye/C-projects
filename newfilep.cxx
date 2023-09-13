#include<stdio.h>
int main()
{
int m;
printf("Enter a number");
scanf("%d",&m);
int k,prime=0;
for(k=2;k<=m;k++)
{
    if(m%k==0){
        prime=1;
        break;
    }
}
    if (prime==0) {
    printf("Its prime");
}
else{
     printf("Or the number is not prime;");
}
}