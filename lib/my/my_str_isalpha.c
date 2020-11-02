/*
** EPITECH PROJECT, 2020
** Day06
** File description:
** Function that check if a string contain only alphabetical char
*/

int is_c_alpha(char c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) {
        return (1);
    }
    return (0);
}

int my_str_isalpha(char const *str)
{
    for (int i = 0 ; str[i] != '\0' ; i++) {
        if (is_c_alpha(str[i]) == 0) {
            return (0);
        }
    }
    return (1);
}
