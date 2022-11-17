#include "shell.h"
/**
* _strdup - dupicates string
* @s: to be duplicated
* Return: pointer to duplicate string
*/
char *_strdup(char *s)
{
char *ptr;
int i, len;
if (s == NULL)
return (NULL);
len = _strlen(s);
ptr = malloc(sizeof(char) * (len + 1));
if (!ptr)
return (NULL);
for (i = 0; *s != '\0'; s++, i++)
ptr[i] = s[0];

ptr[i++] = '\0';
return (ptr);
}
/**
* _strchr - locates a character in a string
* @s: string to be checked
* @c: character to be located
* Return: returns pointer to first occurence of character
* or NULL if character not found
*/
char *_strchr(char *s, char c)
{
while (*s)
{
if (*s == c)
return (s);
s++;
}
if (!c)
return (s);
return (NULL);
}
