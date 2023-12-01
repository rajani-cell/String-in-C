//*Vowel and Consonant Counter*: Create a program that counts the number of vowels and consonants in a given string.
#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    printf("Input string =");
    fgets(str,sizeof(str),stdin);
    
    size_t len=strlen(str);
    
   if(len>0 && str[len-1]=='\n')
   {
      str[len-1]='\0';
      len--;
   }
   
   
   int vowel=0;
   int consonant=0;
   
   char ch;
   for(int i=0;i<len;i++)
   {
    ch=str[i];
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        vowel++;
    }
  else
  {
     consonant++;
  }
  }
  
  printf("Vowel= %d\n",vowel);
  printf("Consonant= %d",consonant);
  
    return 0;
}
