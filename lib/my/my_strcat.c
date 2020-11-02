/*
** EPITECH PROJECT, 2020
** Day07
** File description:
** function that concatenate two strings
*/

int my_strlen(char *str);

char *my_strcat(char *dest, char const *src)
{
    int i = 0;

    while (dest[i] != '\0') {
        i = i + 1;
    }
    for (int j = 0 ; src[j] != '\0' ; j++) {
        dest[i] = src[j];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
