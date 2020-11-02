/*
** EPITECH PROJECT, 2020
** Day06
** File description:
** Function that transform all lowercase in uppercase
*/

char *my_strupcase(char *str)
{
    for (int i = 0 ; str[i] != '\0' ; i++) {
        if (str[i] >= 97 && str[i] <= 122) {
            str[i] -= 32;
        }
    }
    return (str);
}
