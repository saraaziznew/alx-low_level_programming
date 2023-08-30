#include "lists.h"
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = *head, *newnode, *temp = NULL, *temp2 = NULL;
	

	newnode = malloc(sizeof(listint_t));
			newnode->n = n;
			newnode->next = NULL;

			newnode->next = ptr;
			ptr = newnode;

			while (ptr != NULL)
			{
				temp2 = ptr->next;
				ptr->next = temp;
				temp = ptr;
				ptr = temp2;
			}
			ptr = newnode;
			printf("%d\n", newnode->n);
			return (0);
			}
