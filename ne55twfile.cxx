#include <stdio.h>
int main() {
  char s[50],r[50];
  int i,count=1;
  printf("Enter a sentence");
  if(s[0]=='  ' || s[0]=='t')
  count=0;
  
  for (i=0;s[i]!='\0';i++)
  {
    if((s[i]=='  '  || s[i]=='\t') && (s[i+1]!='\t' && s[i+1]!='\0'))
    count++;
  }
    printf("\t no of words = %d",count);
}
