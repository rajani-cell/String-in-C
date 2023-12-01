//*String Palindrome Checker*: Develop a program that checks if a given string is a palindrome (reads the same forwards and backward).
#include<stdio.h>
#include<string.h>
int main()
{
  char str[100];
  printf("Input String =");
  fgets(str,sizeof(str),stdin);
  
  size_t len=strlen(str);
  
  if(len>0 && str[len-1]=='\n')
  {
    str[len-1]='\0' ;
    len--;  
  }
  
  int ispalandrome=1;
    
   int i,j; 
   for(j=0,i=len-1;j<=i;i--,j++) 
   {
      if(str[j]!=str[i]) 
      {
       ispalandrome=0;
       break;
          
      }
   }
    
   if(ispalandrome) 
   {
       printf("String is palandrome.");
   }
    else
    {
     printf("String is not palandrome.");   
    }
    
    
  return 0;  
}
