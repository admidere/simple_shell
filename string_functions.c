#include "shell.h"
/**
* _strcmp - compares two strings
* @s1: compared to s2;
* @s2: compared to s1;
* Return: returns difference between strings
*/
int _strcmp(char *s1, char *s2)
{
int value = 0, i;
for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
{
value = s1[i] - s2[i];
if (value != 0)
{
break;
}
}
return (value);
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
