#include "main.h"
#include <string.h>
/**
 *@_strcat - To concatenate tsrings
 *@dest: a string to be concatenated
 *@src: a string to be concatenated
 *Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
char dest[] = "The first string";
char src[] = "The second string";

strcat(dest, src);
return dest;
}
