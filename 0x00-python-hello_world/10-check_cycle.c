#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - checks if a singly linked list has a cycle
 * @list: pointer to the head of the list
 *
 * Return: 1 if there is a cycle, 0 if there is no cycle
 */
int check_cycle(struct listint_s *list)
{
	struct listint_s *slow = list;
	struct listint_s *fast = list;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;         /* Move one step at a time */
		fast = fast->next->next;   /* Move two steps at a time */

		if (slow == fast)
			return (1);  /* There is a cycle */
	}

	return (0);  /* No cycle found */
}
