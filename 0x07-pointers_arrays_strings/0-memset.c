#include "main.h"

/**
 * -memset - memory with a constant byte
 * @s: source string
 * @c: character to find
 *
 * Return: the string from character found
 *_memset(char *s, char b, unsigned int n);
 */


int a=0,b;

while(s[a])
{
   a++;
}
   for(b=0;b<=a;b++)
      {
        if(c==s[b])
      {
          s+=b;
          return(s);

      }

     }
