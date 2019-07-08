#include <stdio.h>
   int main()                    ///////////////Palindrome check without using string function
   {
                 char str[20], rev[20];
                 int a,flag = 1,len = 0;
                 printf("\n Enter a string : ");
                 gets(str);
                 for (a = 0; str[a] != '\0'; a++)
                {
                 len++;
                 }
                 printf("\n The length of the given string %s is %d\n", str, len);
                 for (a =len-1; a >= 0 ; a--)
                {
                 rev[len-a-1] = str[a];
                 }
                 for (a = 0; a < len ; a++)
                {
                if (rev[a] != str[a])
                {
                flag = 0;
                }
                }
                if (flag == 1)
                printf ("\n\n The given string %s is palindrome", str);
                else
                printf("\n\n The given string %s is not palindrome", str);

   }
