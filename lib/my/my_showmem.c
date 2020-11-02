/*
** EPITECH PROJECT, 2020
** Day06
** File description:
** function that display a memory
*/

#include <unistd.h>

int my_putnbr_base(int nbr, char const *str);
int my_getnbr_base(char const *str, char const *base);
int my_putchar(char c);
int my_putstr(char *str);

int is_c_printable(char c)
{
    return (c < 32 || c > 126 ? 0 : 1);
}

void display_line(int line)
{
    int n_z = 0;

    if (line == 0) {
        n_z = 1;
    }
    for (int i = line ; i > 0 ; n_z++)
        i /= 16;
    for (int j = 0 ; j < 8 - n_z ; j++)
        my_putchar('0');
    my_putnbr_base(line, "0123456789abcdef");
    my_putstr(": ");
}

void display_hex(int line, char const *str, int l)
{
    int l_max = 16 * ((line + 16) / 16);

    for (int i = line ; i < l_max ; i++) {
        if (str[i] < 16) {
            my_putchar('0');
        }
        if (i > l + line) {
            my_putstr("  ");
        } else {
            my_putnbr_base(str[i], "0123456789abcdef");
        }
        if (i % 2 == 1 && i != l_max - 1) {
            my_putchar(' ');
        }
    }
    my_putchar(' ');
}

void print_char(int line, char const *str, int l)
{
    int l_max = 16 * ((line + 16) / 16);

    for (int i = line ; i < l_max ; i++) {
        if (is_c_printable(str[i]) == 0) {
            my_putchar('.');
        } else if (i > l + line) {
            my_putchar('.');
        } else {
            my_putchar(str[i]);
        }
    }
}

int my_showmem(char const *str, int size)
{
    for (int i = 0 ; i < size ; i+= 16) {
        display_line(i);
        display_hex(i, str, size - i);
        print_char(i, str, size - i);
        my_putchar('\n');
    }
    return (0);
}
