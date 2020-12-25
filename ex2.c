#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int count(char str[])
{
 int i,count=0;
 for(i=0;str[i]!='\0';i++)
 {if(str[i]==' ')
  {count++;
  }
} return count;
}
 int main()
 {
  char str[100];
  
  printf("enter:");fgets(str,100,stdin); //gets(line);
  
  int a=count(str);
  printf("number of blank is %d",a);
  return 0;
  }
