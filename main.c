/*
** EPITECH PROJECT, 2021
** pushswap main file epitech project
** File description:
** main file for pushswap
*/

#include "pushswap.h"
#include <stdio.h>
#include <stdlib.h>

void print_list(node *head)
{
    for (node *tmp = head; tmp != NULL; tmp = tmp->next) {
        printf("%d ", tmp->data);
    }
    printf("\n");
}

int check_order(int ac, char **av)
{
    for (int i = 1; i < ac - 1; i++) {
        if (my_getnbr(av[i]) > my_getnbr(av[i + 1]))
            return (1);
    }
    return (0);
}

int error_handling(int ac, char **av)
{
    if (ac < 2) {
        my_putchar('\n');
        return (0);
    }
    if (check_order(ac, av) == 0) {
        my_putchar('\n');
        return(0);
    }
    return (1);
}

int main(int ac, char **av)
{
    if (error_handling(ac, av) == 0)
        return (0);
    node *la = malloc(sizeof(node));
    la->data = my_getnbr(av[1]);
    la->next = NULL;
    node *lb = malloc(sizeof(node));
    lb->next = NULL;
    node *tail = NULL;
    node *temp = NULL;
    for (int i = 2; i < ac; i++)
        insert_end(&la, my_getnbr(av[i]));
    temp = la;
    for (; temp->next; temp = temp->next)
        continue;
    tail = temp;
    for (int i = 0; i < ac - 1; i++)
        min_find(&la, &lb, &tail);
    for (int i = 0; i < ac - 1; i++)
        pa_function(&la, &lb);
    print_list(la);
    return (0);
}
