#include "main.h"

/**
* _strcpy - Copies the string pointed to by src to dest.
* @dest: The destination buffer
* @src: The source string
* Return: Pointer to dest.
*/
char *_strcpy(char *dest, char *src) {
	char *ptr = dest;
	while ((*dest++ = *src++))
		;
	return ptr;
}
