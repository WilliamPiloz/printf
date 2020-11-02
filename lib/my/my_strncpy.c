/*
** EPITECH PROJECT, 2020
** Day06
** File description:
** function that copy n character into another string
*/

char *my_strncpy(char *dest, char *src, int n)
{
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++)
        dest[i] = src[i];
    for (i ; i < n; i++)
        dest[i] = '\0';
    return dest;
}
