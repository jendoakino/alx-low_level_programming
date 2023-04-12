#include "main.h"

 /**
 * binary_to_uint - Converts a binary number to an unsigned integer.
 *
 * @b: The  String that contains the binary num.
 *
 * Return:  converted number as  unsigned integer.
 *         If b is NULL or contains characters other than 0 or 1, return 0.
 */

unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int dec_val = 0;

if (!b)
return (0);

for (i = 0; b[i]; i++)
{
if (b[i] < '0' || b[i] > '1')
return (0);
dec_val = 2 * dec_val + (b[i] - '0');
}

return (dec_val);
}

