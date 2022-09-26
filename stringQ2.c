//2. Write a program to count the occurrence of a given character in a given string.
#include<stdio.h>
#define length 20
int main()
{
    char str[50]="i love my sirg and ineuron";
    printf("%s \n",str);
    char occur='i';
    int count=0;
    for(int i=0;str[i];i++)
    {
        if(str[i]==occur)
        {
            count++;
        }
    }
    printf("i appears %d time in given string",count);
    return 0;
}