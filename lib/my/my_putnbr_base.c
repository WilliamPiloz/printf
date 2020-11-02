/*
** EPITECH PROJECT, 2020
** Day06
** File description:
** convert a nb into another base
*/

int my_strlen(char const *str);
int my_putchar(char c);
char *my_revstr(char *str);

int my_putstr(char *str)
{
    for (int i = 0 ; str[i] != '\0' ; i++) {
        my_putchar(str[i]);
    }
    return (0);
}

int get_nb_l(int nbr, int base_l)
{
    int len = 1;

    for (int i = nbr ; i > 0 ; len++) {
        i /= base_l;
        len++;
    }
    return (len);
}

int my_putnbr_base(int nbr, char const *base)
{
    int base_l = my_strlen(base);
    int nb_l = get_nb_l(nbr, base_l);
    char rev_nb[nb_l];
    int reste;
    int div;
    int i = 0;
    char *p = rev_nb;
    int neg = 1;

    if (nbr < 0) {
        neg = -1;
        nbr *= -1;
    } else if (nbr == 0) {
        my_putchar('0');
        return (0);
    }
    if (nbr == -2147483648) {
        my_putchar('-');
        my_putchar('8');
        neg = 1;
    }
    while (nbr != 0) {
        div = nbr / base_l;
        reste = nbr % base_l;
        rev_nb[i] = base[reste];
        nbr = div;
        i++;
    }
    rev_nb[i] = '\0';
    if (neg == -1) {
        my_putchar('-');
    }
    my_putstr(my_revstr(p));
    return (0);
}
