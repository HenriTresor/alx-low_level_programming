/**
 * rot13 - Encodes a string using ROT13 cipher
 * @str: The string to encode
 *
 * Return: Pointer to the encoded string
 */
char *rot13(char *str)
{
int i, j;
char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
/* Loop through each character in the string */
for (i = 0; str[i] != '\0'; i++)
{
/* Loop through the alphabet to find the matching character */
for (j = 0; j < 52; j++)
{
if (str[i] == alphabet[j])
{
/* Replace the character with the corresponding ROT13 character */
str[i] = rot13[j];
break;
}
}
}
return str;
}
