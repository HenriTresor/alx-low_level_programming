/**
 * _strcmp - Compares two strings
 * @s1: Pointer to first string
 * @s2: Pointer to second string
 *
 * Return: Negative value if s1 is less than s2,
 *         0 if s1 is equal to s2,
 *         Positive value if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
int i;
/* Compare each character until a difference is found */
for (i = 0; s1[i] == s2[i]; i++)
{
/* Stop comparing if end of either string is reached */
if (s1[i] == '\0')
return 0;
}
/* Return difference between characters that caused loop to end */
return s1[i] - s2[i];
}
