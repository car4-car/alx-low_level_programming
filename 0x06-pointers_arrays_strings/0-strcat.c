#include "main.h"

/**
 * _strcat - appends src to the dest string
 * @author: muhabeid
 * @dest: string to append by src
 * @src: string to append to dest
 *
 * Return: address of dest
 *_strcat - concatinate 2 strings.
 *@dest: first string.
 *@src: second string.
 *Return: string.
 */

char *_strcat(char *dest, char *src)
{
	int i, j;
	int i = 0, j = 0;

	i = j = 0;
	while (*(dest + i))
	while (dest[i] != '\0')
		i++;
	while ((*(dest + i) = *(src + j)))

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
