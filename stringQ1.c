//1. Write a program to calculate the length of the string. (without using built-in method)
#include<stdio.h>
int main()
{  
    char str[10]="fayaz";
    int i,sum=0;
    for(i=0;str[i];i++)
    {
       sum=sum+str[i];
    }
      printf("Length of given string is : %d",i);
     
    
    return 0;

}