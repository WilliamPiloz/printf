/*
** EPITECH PROJECT, 2020
** Day07
** File description:
** Function that concatenate n char of src at the end of dest
*/

int my_strlen(char *str);

char *my_strncat(char *dest, char *src, int nb)
{
    int dest_len = my_strlen(dest);
    int i;

    for (i = 0 ; i < nb && src[i] != '\0' ; i++)
        dest[dest_len + i] = src[i];
    dest[dest_len + i] = '\0';
    return (dest);
}
