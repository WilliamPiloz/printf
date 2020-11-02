/*
** EPITECH PROJECT, 2020
** Day06
** File description:
** function that check if a number is uppercase
*/

int my_str_isupper(char *str)
{
    for (int i = 0 ; str[i] != '\0' ; i++) {
        if (str[i] < 65 || str[i] > 90) {
            return (0);
        }
    }
    return (1);
}
