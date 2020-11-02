/*
** EPITECH PROJECT, 2020
** Day06
** File description:
** Function that check if a string contain only nb
*/

int my_str_isnum(char *str)
{
    for (int i = 0 ; str[i] != '\0' ; i++) {
        if (str[i] < 48 || str[i] > 57) {
            return (0);
        }
    }
    return (1);
}
