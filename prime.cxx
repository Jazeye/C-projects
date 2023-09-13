#include<stdio.h>
int main()
{
int m,i,pr=0;
printf("Enter a num :");
scanf("%d",&m);

if (m == 0 || m == 1)
    pr = 1;
    
for (i = 2; i <= m / 2; ++i) {
if (m % i == 0) {
      pr = 1;
      break;
    }
  }
        if( pr==0){
            printf("%d is prime",m);
        }else{
            printf("%d is not a prime",m);
        }
return(0);

}