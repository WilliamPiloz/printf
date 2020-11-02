#include <stdarg.h>

int sum_numbers(int n, ...)
{
    va_list ap;
    int result = 0;
    int nb;

    va_start(ap, n);
    for (int i = 0 ; i < n ; i++) {
        nb = va_arg(ap, int);
        result += nb;
    }
    return (result);
}
