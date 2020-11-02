/*
** EPITECH PROJECT, 2020
** Day05
** File description:
** Function that find the lower prime nb that is greater that n
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    while (my_is_prime(nb) == 0) {
        nb++;
    }
    return (nb);
}
