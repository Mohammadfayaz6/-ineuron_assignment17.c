//7. Write a program in C to count the total number of alphabets, digits and special
//characters in a string.
#include <stdio.h>
#include <string.h>
int main()
{
  char ch[30];
  printf("Enter the string\n");
  fgets(ch, 30, stdin);
  int i, alphabet = 0, digits = 0, specialch = 0;
  for (i = 0; ch[i]; i++)
  {
    if ((ch[i] >= 'A' && ch[i] <= 'Z') || (ch[i] >= 'a' && ch[i] <= 'z'))
    {
      alphabet++;
    }
    else
    {
      if (ch[i] >= '0' && ch[i] <= '9')
      {
        digits++;
      }

      else
      {
        specialch++;
      }
    }
  }
  printf("Total number of alphbet in string is : %d\n", alphabet);
  printf("Total number of digits in string is : %d\n", digits);
  printf("Total number of special character in string is : %d", specialch);
  return 0;
}