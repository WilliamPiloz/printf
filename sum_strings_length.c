#include <stdarg.h>
#include <my.h>

int sum_strings_length(int n, ...)
{
    va_list ap;
    int result = 0;
    char *str;

    va_start(ap, n);
    for (int i = 0 ; i < n ; i++) {
        str = va_arg(ap, char *);
        result += my_strlen(str);
    }
    return (result);
}
