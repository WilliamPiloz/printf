/*
** EPITECH PROJECT, 2020
** Day04
** File description:
** function that count the numbers of char of a string
*/

int my_putchar(char c);

int my_strlen(char const *str)
{
    int size = 0;

    for (int i = 0 ; str[i] != '\0' ; i++) {
        size++;
    }
    return (size);
}
