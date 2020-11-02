/*
** EPITECH PROJECT, 2020
** Day05
** File description:
** return the power p of a number n
*/

int my_compute_power_rec(int nb, int p)
{
    int powered_n = nb;

    if (p < 0) {
        return (0);
    } else if (p == 0) {
        return (1);
    } else {
        powered_n *= my_compute_power_rec(nb, p - 1);
    }
    return (powered_n);
}
