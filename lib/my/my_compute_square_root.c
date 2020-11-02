/*
** EPITECH PROJECT, 2020
** Day05
** File description:
** Function that calc the root of an int
*/

int my_compute_square_root(int nb)
{
    for (int i = 0 ; i <= nb ; i++) {
        if (i * i == nb) {
            return (i);
        }
    }
    return (0);
}
