#include "main.h"
/**
*_strlen - a function that returns the length of a string.
*@s: whose len is to be determined
*Return: Length of string
*/
int _strlen(char *s)
{
int lenOfStr = 0;
while(*s != '\0')
{
lenOfStr++;
s++;
}
return lenOfStr;
}
