/*
** EPITECH PROJECT, 2018
** Tree.C
** File description:
** Print a tree with chars
*/

int my_put_nbr(int nb);
void my_putchar(char c);

void add_spaces(int spaces)
{
    int i = 0;
    while (i < spaces) {
        my_putchar(' ');
        i++;
    }
}

void add_stars(int stars)
{
    int i = 0;
    while (i < stars) {
        my_putchar('*');
        i++;
    }
    my_putchar('\n');
}

int calc_spaces(int size)
{
    int i = 0;
    int j = 0;
    int k = 3;
    while (i < size - 1) {
        k += 3 + j;
        if (i % 2 == 0)
            j++;
        i++;
    }
    return (k);
}

void disp_bottom(int size)
{
    int i = 0;
    int j = 0;
    int width = 0;
    if (size % 2 == 0)
        width = size + 1;
    else
        width = size;
    while (i < size) {
        j = 0;
        add_spaces(calc_spaces(size) - (width - 1) / 2);
        while (j < width) {
            my_putchar('|');
            j++;
        }
        my_putchar('\n');
        i++;
    }
}

void tree(int size)
{
    int nbr_line = 4;
    int nbr_stars = -1;
    int i = 0;
    int j = 0;
    int padding = 2;
    while (i < size) {
        j = 0;
        nbr_line = i + 3;
        while (j < nbr_line + 1) {
            nbr_stars+=2;
            add_spaces(calc_spaces(size) - (nbr_stars-1) / 2);
            add_stars(nbr_stars);
            j++;
        }
        nbr_stars-=2*padding;
        if (i%2!=0)
            padding++;
        i++;
    }
    disp_bottom(size);
}
