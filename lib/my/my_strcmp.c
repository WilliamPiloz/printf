/*
** EPITECH PROJECT, 2020
** Day06
** File description:
** Function that compare two strings
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;
    int size;

    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') {
        i++;
    }
    size = s1[i] - s2[i];
    return (size);
}
