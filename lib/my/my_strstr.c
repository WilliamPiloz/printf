/*
** EPITECH PROJECT, 2020
** Day06
** File description:
** Function that find a string into another
*/

#include <stdlib.h>

int my_strlen(char *str);
int my_strncmp(char *str, char *src, int n);

char *my_strstr(char *str, char *to_find)
{
    int to_find_s = my_strlen(to_find);

    if (str[0] == '\0') {
        return (NULL);
    }
    if (my_strncmp(str, to_find, to_find_s) == 0) {
        return (str);
    }
    return (my_strstr(str + 1, to_find));
}
