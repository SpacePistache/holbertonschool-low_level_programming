#include "main.h"

/**
 * leet - weird..
 *
 * @s: the variable
 * Return: s.
 */
char *leet(char *s)
{
        int i, j;
        char letters[] = "aAeEoOtTlL";
        char leet_chars[] = "4433007711";

        for (i = 0; s[i] != '\0'; i++)
        {
                for (j = 0; letters[j] != '\0'; j++)
                {
                        if (s[i] == letters[j])
                        {
                                s[i] = leet_chars[j];
                                break;
                        }
                }
        }

        return (s);
}
