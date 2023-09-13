#include <stdio.h> 
int main() 
{
int i, j, r, k = 0;
printf("\n\tNumber of Lines = ");
scanf("%d", &r);

for (i = 1; i <= r; i++)
{
    printf("\n\t\t");

             for (j = 1; j <= r - i; j++)
             {
                 printf("  "); //space space
              }

              for (k = 1; k <= i; k++)
              {

               printf(" *  "); //spsce+star+space +space
                }
     }
 
}