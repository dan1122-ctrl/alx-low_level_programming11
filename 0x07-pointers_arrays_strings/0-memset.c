
 #include "main.h"



 /**
 * _memset -fills a memory with a constant byte 
 * @s: addres to memory
 * @b:character to be used
 * @n:number of byte to be used
 *
 * Return:pointer to memory block
 */


 char *_memset(char *s, char b, unsigned int n);
 {
	while (n)
    	{
      s[n - 1] = b;
      n--;
       }  
    
       	return (s);
 }
