/*
** EPITECH PROJECT, 2020
** Day06
** File description:
** my_showstr
*/

int my_putnbr_base(int nbr, char const *base);
int my_putchar(char c);

int is_print(char c)
{
    if (c >= 32 && c <= 126) {
        return (1);
    }
    return (0);
}

void display_zero(int i)
{
    if (i < 16) {
        my_putchar('0');
    }
}

int my_showstr(char const *str)
{
    for (int i = 0 ; str[i] != '\0' ; i++) {
        if (is_print(str[i]) == 0) {
            my_putchar('\\');
            display_zero((unsigned char)str[i]);
            my_putnbr_base((unsigned char)str[i], "0123456789abcdef");
        } else {
            my_putchar(str[i]);
        }
    }
}
