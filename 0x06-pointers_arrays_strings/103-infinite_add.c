#include "main.h"
/**
 * infinite_add - Adds two numbers
 * @n1: First number to add
 * @n2: Second number to add
 * @r: Buffer to store result
 * @size_r: Size of buffer
 *
 * Return: Pointer to result or 0 if result can't be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
        int i = 0, j = 0, sum = 0, carry = 0, len1 = 0, len2 = 0;

        while (n1[len1 + 1])
                len1++;
        while (n2[len2 + 1])
                len2++;

        if (len1 + 2 > size_r || len2 + 2 > size_r)
                return (0);

        len1++;
        len2++;

        for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0; i--, j--)
        {
                sum = carry;
                if (i >= 0)
                        sum += n1[i] - '0';
                if (j >= 0)
                        sum += n2[j] - '0';
                if (sum >= 10)
                {
                        carry = 1;
                        sum -= 10;
                }
                else
                        carry = 0;
                r[i + j + 1] = sum + '0';
        }

        if (carry == 1)
        {
                if (len1 + len2 - 1 < size_r)
                {
                        r[0] = '1';
                        r[len1 + len2 - 1] = '\0';
                        return (r);
                }
                else
                        return (0);
        }

        r[len1 + len2 - 1] = '\0';

        for (i = 0; i < (len1 + len2 - 1) / 2; i++)
        {
                char temp = r[i];
                r[i] = r[len1 + len2 - 2 - i];
                r[len1 + len2 - 2 - i] = temp;
        }

        return (r);
}
