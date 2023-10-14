#include "shell.h"

/**
 * _strstr - a function that locates a substring
 * @needle: the substring ti be found
 * @haystack: the string searched
 * Return: pointer to substring address(success) or NULL (failure)
 */

char *_strstr(char *haystack, char *needle)
{
        int x;

        if (*needle == 0)
                return (haystack);
        while (*haystack)
        {
                x = 0;
        if (haystack[x] == needle[x])
        {
                do {
                        if (needle[x + 1] == '\0')
                                return (haystack);
                        x++;
        } while (haystack[x] == needle[x]);
        }
                haystack++;
        }
        return ('\0');
}
