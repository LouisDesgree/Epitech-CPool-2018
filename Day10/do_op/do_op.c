/*
** EPITECH PROJECT, 2018
** DO - OP
** File description:
** Simple operations
*/

int add(int n1, int n2);
int sub(int n1, int n2);
int mul(int n1, int n2);
int div(int n1, int n2);
int mod(int n1, int n2);

int doop(int n1, char op, int n2)
{
    int result = 0;
    int (*fc[5])(int, int) = { &add, &sub, &mul, &div, &mod};
    char operators[5] = {'+', '-', '*', '/', '%'};

    for (int i = 0; i < 5; i++) {
        if (operators[i] == op) {
            result = fc[i](n1, n2);
            break;
        }
    }
    my_put_nbr(result);
    return (result);
}

int main(int ac, char **av)
{
    if (ac != 4)
        return (84);

    if (av[2][0] == '/' && my_getnbr(av[3]) == 0) {
        my_putstr("Stop: division by zero");
        return (84);
    }

    if (av[2][0] == '%' && my_getnbr(av[3]) == 0) {
        my_putstr("Stop: modulo by zero");
        return (84);
    }

    doop(my_getnbr(av[1]), av[2][0], my_getnbr(av[3]));
}