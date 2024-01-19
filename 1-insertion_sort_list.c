#include "sort.h"
/**
 * swap - Swaps two nodes in a doubly linked list
 * @list: Pointer to the doubly linked list
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 * Return: Nothing (void)
*/
void swap(listint_t **list, listint_t *first, listint_t *second)
{
	if (first->prev)
		first->prev->next = second;
	else
		*list = second;
	if (second->next)
		second->next->prev = first;
	first->next = second->next;
	second->prev = first->prev;
	first->prev = second;
	second->next = first;
}
/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 * in ascending order using Insertion sort algorithm
 * @list: Pointer to the doubly linked list
 * Return: Nothing (void)
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp;
	
	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	current = (*list)->next;
	while (current)
	{
		temp = current->prev;
		while (temp && temp->n > current->n)
		{
			swap(list, temp, current);
			print_list(*list);
			temp = current->prev;
		}
		current = current->next;
	}
}
