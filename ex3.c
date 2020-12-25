#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void replace(char str[],char s1,char s2)
{
 int i;
 for(i=0;str[i]!='\0';i++)
 {
  if(str[i]==s1)
   {
     str[i]=s2;
   } 
 } 
 }



int main()
{ char str[100];
   char s1,s2; // khai bao size co dinh 
  printf("enter string:");
  scanf("%s",str);
  
  printf("replace:");
  scanf(" %c",&s1); // avoid space
  printf("replace with:");
  scanf(" %c",&s2);
  replace(str,s1,s2);
  printf("%s",str);
 
 
 return 0;
}
