//5. Write a program to convert a given string into lowercase
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("Enter your name\n");
    fgets(str,20,stdin);
    strlwr(str);
    printf("%s",str);
    return 0;
}