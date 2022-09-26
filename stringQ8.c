//8. Write a program in C to copy one string to another string.
#include<stdio.h>
#include<string.h>
int main()
{   
    char str1[20]= "my sirG";
    char str2[20];
    strcpy(str2,str1);
    printf("first String copied in second string\n");
    puts(str2);
    return 0;
}