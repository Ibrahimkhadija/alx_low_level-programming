<<<<<<< HEAD
#include <stdio.h>
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
    int sum;

    sum = sum_them_all(2, 98, 1024);
    printf("%d\n", sum);
    sum = sum_them_all(4, 98, 1024, 402, -1024);
    printf("%d\n", sum);    
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
    n = print_list(head);
    printf("-> %lu elements\n", n);

    printf("\n");
    free(new->str);
    new->str = NULL;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    free(new);
>>>>>>> 0x12-singly_linked_lists
    return (0);
}
