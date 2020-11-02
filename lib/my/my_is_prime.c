/*
** EPITECH PROJECT, 2020
** Day05
** File description:
** Function that return 1 if the number is prime and 0 if not
*/

int my_is_prime(int nb)
{
    int div = 0;

    for (int i = 1 ; i <= nb ; i++) {
        if (nb % i == 0) {
            div++;
        }
    }
    if (div == 2) {
        return (1);
    } else {
        return (0);
    }
    return (-1);
}
