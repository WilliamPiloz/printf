/*
** EPITECH PROJECT, 2020
** Day03
** File description:
** Program that test if a number is negativ
** (display 'n' if negative and 'p' if not)
*/

int my_putchar(char c);

int my_isneg(int n)
{
    if (n >= 0) {
        my_putchar('P');
    } else if (n < 0) {
        my_putchar('N');
    } else {
        return (-1);
    }
    return (1);
}
