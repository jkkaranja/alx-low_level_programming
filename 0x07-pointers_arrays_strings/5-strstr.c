#include "main.h"
/**
  * _strstr - enry point
  * @haystack: input
  * @needle: input
  * Return: always 0
  */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}
		if (*p == '\10')
			return (haystack);
	}
	return (0);
}
