//*String Concatenation*: Write a program to concatenate two strings using the standard library function strcat().
#include<stdio.h>
#include<string.h>
int main()
{
char str1[100];
char str2[100];

printf("Enter inputString 1 =");
gets(str1);

printf("Enter inputString 2 =");
gets(str2);

strcat(str1," ");

strcat(str1,str2);
printf("Concatination of string = %s",str1);



  return 0;
}
