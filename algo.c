/*
** EPITECH PROJECT, 2021
** algorithme file
** File description:
** algo
*/

#include "pushswap.h"
#include <stdlib.h>

int min(int x, int y)
{
    return (x < y ? x : y);
}

void min_find(node **la, node **lb, node **tail)
{
    int min_val = (*la)->data;

    for (node *tmp = *la; tmp != NULL; tmp = tmp->next) {
        min_val = min(min_val, tmp->data);
    }
    while ((*la)->data != min_val) {
        swap_end(la, tail);
    }
    pb_function(la, lb);
}
