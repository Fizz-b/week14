#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
  char s1[20]= "12345";
  char s2[]="New Year";
  char s3[40]="";
  printf("s1=%s\ns2=%s\n",s1,s2);
 printf("strcat(s1,s2) =%s \n",strcat(s1,s2));
 printf("strncat(s3,s1,6)=%s\n",strncat(s3,s1,6));
printf("strcat(s3,s1)=%s\n",strcat(s3,s1));
 int a=atoi(s1);
 
 double b=atof(s2);
 printf("a to i of str1 is %d",a);



  return 0;
}
