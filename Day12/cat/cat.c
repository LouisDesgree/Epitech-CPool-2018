/*
** EPITECH PROJECT, 2018
** CAT
** File description:
** Reproduces the bash "C" function
*/

#include "my.h"
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

void my_print_errors(char *av, int errdef)
{
    if (errdef == ENOENT) {
        write(2, "cat: ", 5);
        write(2, av, my_strlen(av));
        write(2, ": no such file or directory\n", 29);
    }
    else if (errdef == EISDIR) {
        write(2, "cat: ", 5);
        write(2, av, my_strlen(av));
        write(2, ": is a directory\n", 18);
    }
}

int my_cat(char *av)
{
    int fd = open(av, O_RDONLY);
    int result;
    char buffer[20];

    if (fd == -1) {
        my_print_errors(av, errno);
        return (84);
    }
    do {
        result = read(fd, buffer, 20);
        if (result == -1) {
            my_print_errors(av, errno);
            close(fd);
            return (84);
        }
        write(1, buffer, result);
    } while (result > 0);
    close(fd);
    return (0);
}

int infinite_cat(void)
{
    int result = 0;
    char buffer[80];

    while (1) {
        result = read(0, buffer, 80);
        buffer[result] = '\0';
        if (result == 0)
            return (0);
        my_putstr(buffer);
    }
    return (0);
}