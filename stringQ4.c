//4. Write a program to convert a given string into uppercase
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("Enter your name\n");
    fgets(str,20,stdin);
    strupr(str);
    printf("%s",str);
    return 0;
}