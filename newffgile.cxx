#include <stdio.h>
int main()
 {
    int i,n,a=1,b=0,c=0;
    printf("\n\nenter a number of limit ");
    scanf("%d",&n);
    printf("fibonacci numbesr is  ");
    for(i=1;i<=n;i++)
    {
        printf("\t%d",c);
        c=a+b;
        a=b;
        b=c;
    }
  
}
