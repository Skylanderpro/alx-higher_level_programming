#ifndef LISTS_H
#define LISTS_H

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	    int n;
	        struct listint_s *next;
} listint_t;

/* Function to print elements of a listint_t list */
size_t print_listint(const listint_t *h);

/* Function to add a new node at the end of a listint_t list */
listint_t *add_nodeint_end(listint_t **head, const int n);

/* Function to free a listint_t list */
void free_listint(listint_t *head);

/* Declaration of the insert_node function */
listint_t *insert_node(listint_t **head, int number);

#endif /* LISTS_H */
