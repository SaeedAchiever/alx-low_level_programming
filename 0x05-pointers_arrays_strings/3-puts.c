#include "main.h"
#include <stdio.h>
/**
*_puts - prints a string followed by a new line
*@str: holds the variable
Return (always) 0
*/
void _puts(char *str);
int main(void)
{
char str[] = "Hi am a string to be printed";
_puts(str "\n");
return 0;
}
