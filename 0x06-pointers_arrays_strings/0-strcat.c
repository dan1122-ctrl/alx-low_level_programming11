#include "main.h"   
#include<string.h>

/**
                   
 * strcat - Concatenates the string pointed to by @src, including the terminat 
 * null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 * Return: A pointer to the destination string @dest.
 */
char *strcat(char *dest, const char *src)
{
    char dest[]="daniel";
    char src[10]="Teklemariam";
    strcat(dest,src);
    puts(dest);

}
