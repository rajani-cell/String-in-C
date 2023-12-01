//*String Reversal*: Create a program that reverses a given string.
#include<stdio.h>
int main()
{
char str1[100];
char str2[100];
printf("Enter inputString =");
gets(str1);
int k=0;
int len=0;

while(str1[k] !='\0')
{
  k++;
  len++;
}

printf("Length = %d\n",len);

int i,j;

for(j=0,i=len-1;j<len,i>=0 ;i--,j++)
{

str2[j]=str1[i];

}
 str2[len] ='\0';

printf("Reverse string = %s",str2);

  return 0;
}
