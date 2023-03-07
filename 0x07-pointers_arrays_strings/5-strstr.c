#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: the string to search
 * @needle: the substring to locate
 *
 * Return: a pointer to the beginning of the located substring,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
char *hay_ptr, *needle_ptr;

while (*haystack)
{
hay_ptr = haystack;
needle_ptr = needle;
while (*needle_ptr && *hay_ptr == *needle_ptr)
{
hay_ptr++;
needle_ptr++;
		}
if (!*needle_ptr)
{
return (haystack);
}
haystack++;
}

return (NULL);
}
