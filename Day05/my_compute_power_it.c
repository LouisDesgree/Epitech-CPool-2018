/*
** EPITECH PROJECT, 2018
** My compute power it
** File description:
** Simple function that put an int to the power as argument
*/

int my_compute_power_it(int nb, int p)
{
    int res = 1;
    int timer = 0;

    if (p == 0)
        return (1);
    if (p < 0 || nb > (2147483647 / p))
        return (0);
    else {
        while (timer < p) {
            res = res * nb;
            timer++;
        }
    }
    return (res);
}