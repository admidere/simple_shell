#include "shell.h"
/**
* _strcmp - compares two strings
* @s1: compared to s2;
* @s2: compared to s1;
* Return: returns difference between strings
*/
int _strcmp(char *s1, char *s2)
{
int i = 0, output;
while (*(s1 + i) == *(s2 + i) && *(s1 + i) != '\0')
i++;
output = (*(s1 + i) - *(s2 + i));
return (output);
}
/**
* _strlen - returns the length of a string
* @s: string passed
* Return: returns length of string passed
*/
int _strlen(char *s)
{
int count = 0;
while (*s != '\0')
{
count++;
s++;
}
return (count);
}
/**
* _strncmp - compares two strings up to n bytes
* @s1: compared to s2
* @s2: compared to s1
* @n: number of bytes
* Return: difference between s1 and s2
*/
int _strncmp(char *s1, char *s2, int n)
{
int i;

for (i = 0; s1[i] && s2[i] && i < n; i++)
{
if (s1[i] != s2[i])
return (s1[i] - s2[i]);
}
return (0);
}
