/*
** EPITECH PROJECT, 2021
** initialisation of the linked list
** File description:
** list_init
*/

#include "pushswap.h"
#include <stdlib.h>

void insert_end(node** head, int value)
{
    node *new_node = malloc(sizeof(node));

    new_node->next = NULL;
    new_node->data = value;
    node *tmp = *head;
    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
    tmp->next = new_node;
}

void swap_end(node** head, node **tail)
{
    (*tail)->next = *head;
    *tail = (*tail)->next;
    *head = (*head)->next;
    (*tail)->next = NULL;
}

void pb_function(node **la, node **lb)
{
    node *new_node = malloc(sizeof(node));

    new_node->data = (*la)->data;
    new_node->next = *lb;
    *lb = new_node;
    remove_first_node(la);
}

void pa_function(node **la, node **lb)
{
    node *new_node = malloc(sizeof(node));

    new_node ->data = (*lb)->data;
    new_node->next = *la;
    *la = new_node;
    remove_first_node(lb);
}

void remove_first_node(node **head)
{
    node *to_remove = *head;
    *head = (*head)->next;
    free(to_remove);
}
