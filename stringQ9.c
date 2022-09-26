//9. Write a C program to sort a string array in ascending order.
#include<stdio.h>
#include<string.h>
int main()
{
    char temp ,ch[]="helloworld";
    puts(ch);
    int i,j,l;
    l=strlen(ch);
    for(i=0;i<l-1;i++)
    {
        for(j=i+1;j<l;j++)
        {
            if(ch[i]>ch[j])
            {
               temp=ch[i];
               ch[i]=ch[j];
               ch[j]=temp;
            }
        }
    }
    printf("After sorting the given string is\n");
    printf("%s",ch);
   

    return 0;
}