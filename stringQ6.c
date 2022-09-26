//6. Write a program to reverse a string.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("Enter your name\n");
    fgets(str,20,stdin);
    strrev(str);
    printf("%s",str);
    return 0;
}