/**
 * binary_to_uint - Converts a binary number to an unsigned integer.
 *
 * @binary: String containing the binary number.
 *
 * Return: The converted number as an unsigned integer.
 * If binary is NULL or contains characters other than 0 or 1, return 0.
 */

unsigned int binary_to_uint(const char *binary)
{
int i;
unsigned int decimal_value = 0;

if (!binary)
return (0);

for (i = 0; binary[i]; i++)
{
if (binary[i] < '0' || binary[i] > '1')
return (0);
decimal_value = 2 * decimal_value + (binary[i] - '0');
}

return (decimal_value);
}

