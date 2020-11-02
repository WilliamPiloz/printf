/*
** EPITECH PROJECT, 2020
** Day06
** File description:
** function that transform first letter of each word into uppercase
*/

int is_alpha(char c)
{
    if ((c >= 48 && c <= 57) || (c >= 65 && c <= 89) || (c >= 97 && c <= 122)) {
        return (1);
    }
    return (0);
}

int is_lower(char c)
{
    if (c >= 97 && c <= 122) {
        return (1);
    }
    return (0);
}

int is_upper(char c)
{
    if (c >= 65 && c <= 90) {
        return (1);
    }
    return (0);
}

char *my_strcapitalize(char *str)
{
    for (int i = 0 ; str[i] != '\0' ; i++) {
        if (is_lower(str[i]) == 1 && is_alpha(str[i - 1]) == 0) {
            str[i] -= 32;
        }
        if (is_upper(str[i]) == 1 && is_alpha(str[i - 1]) == 1) {
            str[i] += 32;
        }
    }
    return (str);
}
