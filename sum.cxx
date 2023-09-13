//#include<stdio.h>
// int main()
//{
//printf("Enter two  number");
//float a,b,c;
//scanf("%f%f",&a,&b);
//c=a+b;
    // printf(" sum of two number is: %f" ,c);
       
//return 0;
//}

#include<stdio.h>
void main()
{
    int a,n,k,i,sum=0,x,rev[20];
    printf("\n\t enter the number");
    scanf("%d",&n);
    x=n, k=0;
    while(x>0)
    {
        a=x%10;
        sum=sum+a;
        rev[k]=a;
        x=x/10;
        k++;
    }
    printf("\n\tSum of the digits of %d =%d",n,sum);
    printf("\n\n\tRevers of %d = ",n);
    for(i=0;i<k;i++)
    {
        printf("%d",rev[i]);
    }
}
    
    
        
