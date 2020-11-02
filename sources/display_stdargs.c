#include <stdarg.h>
#include <my.h>

void display(char c, va_list ap)
{
    char *str;
    int nb;

    switch (c) {
        case 's':
            str = va_arg(ap, char *);
            my_putstr(str);
            my_putchar('\n');
            break;
        case 'd':
            nb = va_arg(ap, int);
            my_put_nbr(nb);
            my_putchar('\n');
            break;
        case 'c':
            nb = va_arg(ap, int);
            my_putchar(nb);
            my_putchar('\n');
            break;
    }
}

void disp_stdarg(char *s, ...)
{
    va_list ap;

    va_start(ap, s);
    for (int i = 0 ; s[i] != '\0' ; i++) {
        display(s[i], ap);
    }
}