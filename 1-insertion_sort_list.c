#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: Pointer to a pointer to the head of the list
 * Description: This function sorts a doubly linked list
 * of integers in ascending order using the Insertion sort algorithm
 */
void insertion_sort_list(listint_t **list)
{
    if (!list || !*list || !(*list)->next)
        return;

    listint_t *current = (*list)->next;

    while (current)
    {
        listint_t *next = current->next;
        listint_t *prev = current->prev;

        while (prev && prev->n > current->n)
        {
            // Swap nodes
            prev->next = current->next;
            if (current->next)
                current->next->prev = prev;

            current->next = prev;
            current->prev = prev->prev;
            prev->prev = current;

            if (current->prev)
                current->prev->next = current;
            else
                *list = current;

            prev = current->prev;

            print_list(*list);
        }

        current = next;
    }
}

