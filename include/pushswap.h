/*
** EPITECH PROJECT, 2021
** header file of my_pushswap project
** File description:
** pushswap
*/

#ifndef PUSHSWAP_H_
    #define PUSHSWAP_H_
typedef struct node {
    int data;
    struct node *next;
} node;
void final(int ac);
void pb_function(node **la, node **lb);
void pa_function(node **la, node **lb);
void my_putchar(char c);
void my_putstr(char const *str);
void remove_first_node(node **head);
void min_find(node **la, node **lb, node **tail);
void swap_end(node** head, node **tail);
void insert_end(node** head, int value);
int my_getnbr(char const *str);
void my_putchar(char c);
#endif
