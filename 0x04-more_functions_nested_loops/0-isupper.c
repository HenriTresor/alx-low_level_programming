#include "main.h"
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return 1; // c is uppercase
}
else
{
return 0; // c is not uppercase
}
}
