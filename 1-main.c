<<<<<<< HEAD
#include "variadic_functions.h"
=======
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
>>>>>>> 0x12-singly_linked_lists

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
<<<<<<< HEAD
    print_numbers(", ", 4, 0, 98, -1024, 402);
=======
    list_t *head;
    list_t *new;
    list_t hello = {"World", 5, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->str = strdup("Hello");
    new->len = 5;
    new->next = head;
    head = new;
    n = list_len(head);
    printf("-> %lu elements\n", n);
    free(new->str);
    free(new);
>>>>>>> 0x12-singly_linked_lists
    return (0);
}
