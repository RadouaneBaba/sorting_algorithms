#include "sort.h"

/**
 * insertion_sort_list - insertion sort alg
 *
 * @list: pointer to doubly linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *b, *a, *t, *l, *head;

	if (list == NULL)
		return;
	head = *list;
	while (head)
	{
		l = head;
		while (l->prev && l->prev->n > l->n)
		{
			t = l->prev;
			b = t->prev;
			a = l->next;

			t->prev = l;
			l->next = t;
			l->prev = b;
			t->next = a;
			if (b)
				b->next = l;
			else
				*list = l;
			if (a)
				a->prev = t;
			print_list(*list);
		}
		head = head->next;
	}
}
