#include "main.h"
/**
 *_strcat - a function that concatenates two strings.
 *@dest: a string to be concatenated
 *@src: a string to be concatenated
 *Return: void
 */

char *_strcat(char *dest, char *src) {
    char *p = dest;
    while (*p != '\0') {
        p++;
    }
    while (*src != '\0') {
        *p = *src;
        p++;
        src++;
    }
    *p = '\0';
    return dest;
}
