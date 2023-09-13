#include<stdio.h>
 int main()
{
    char s[100];
    int i;
    printf("enter the string");
    printf("short form is ",toupper(s[0]));
    for (i=0;s[i]!='\0';i++)
    {
        if(s[i]== '  '&&s[i+1]!= '  ')
        {
            printf("%c",toupper(s[i+1]));
        } 
    }
    
    
}