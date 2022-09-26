//3. Write a program to count vowels in a given string
#include<stdio.h>
int main()
{
    char new[20];
    int count=0,i;
    printf("Enter the string name\n");
    fgets(new,20,stdin);

    for(i=0;new[i];i++)
    {
        if(new[i]=='a'||new[i]=='e'||new[i]=='i'||new[i]=='o'||new[i]=='u')
        {
            count++;
        }

    }
    printf("Total vowels in given string is %d",count);
    return 0;
}