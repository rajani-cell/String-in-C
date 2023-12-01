//*String Length*: Write a program to find the length of a string without using the standard library function strlen().
#include<stdio.h>
int main()
{
char str[100];

printf("Enter inputString =");
gets(str);
int k=0;
int len=0;

while(str[k] !='\0')
{
  k++;
  len++;
}

printf("Length = %d\n",len);



  return 0;
}
