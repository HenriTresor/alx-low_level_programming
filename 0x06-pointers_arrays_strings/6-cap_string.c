/**
 * cap_string - Capitalizes all words of a string
 * @s: Pointer to string
 *
 * Return: Pointer to resulting string
 */
char *cap_string(char *s)
{
int i;
char *sep = " \t\n,;.!?\"(){}";
/* Capitalize first character of string */
if (s[0] >= 'a' && s[0] <= 'z')
s[0] -= 32;
/* Capitalize first character after each separator */
for (i = 1; s[i] != '\0'; i++)
{
if (strchr(sep, s[i - 1]) != NULL && s[i] >= 'a' && s[i] <= 'z')
s[i] -= 32;
}
return s;
}
