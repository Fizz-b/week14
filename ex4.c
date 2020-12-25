#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int check(char str[])
{
 int i;
 int flag=0,c=0;
 for(i=0;str[i]!='\0'&&i<3;i++)
 {
  if(isalpha(str[i]))
   {flag=1;
 } else return 1;

}
for(i=3;str[i]!='\0'&&i<7;i++)
 {
  if(isdigit(str[i]))
   {c=1;
 } else return 1;

}
if(flag==1&&c==1){return 0;}
}

int main()
{
 char str[100];
 do
  {printf("enter code:");
   scanf("%s",str);
  if(strlen(str)<7){printf("length 7\n");}
  }while(strlen(str)<7||check(str));  // 0 het thi out vong lap
  
  //https://www.vssut.ac.in/lecture_notes/lecture1424354156.pdf
 printf("you enter: %s",str);
 
 
 
 
 
 
 
 return 0;
}
