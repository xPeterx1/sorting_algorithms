#include "sort.h"
/**
 * insertion_sort_list - good
 * @list: ok
 * Return: void
*/
void insertion_sort_list(listint_t **list)
{
	int i;
	int j;
	listint_t *outer_element;
	listint_t *inner_element;
	int size;
	int index;
	int *tmp_pointer;
	int tmp;

	size = dlistint_len(*list);
	outer_element = NULL;
	inner_element = NULL;

	for (i = 0; i < size - 1; i++)
	{
		index = i + 1;
		outer_element = get_index_address(*list, index);
		for (j = i; j >= 0; j--)
		{
			inner_element =  get_index_address(*list, j);
			if (outer_element->n < inner_element->n)
			{
				tmp = inner_element->n;
				tmp_pointer = (int *)&inner_element->n;
				*tmp_pointer = outer_element->n;
				tmp_pointer = (int *)&outer_element->n;
				*tmp_pointer = tmp;
				print_list(*list);
				outer_element = get_index_address(*list, j);
			}


		}
	}
}

/**
 * dlistint_len - yes
 * @h: hellp
 * Return: n
*/
size_t dlistint_len(const listint_t *h)
{
	const listint_t *tmp;
	int numofnodes;

	tmp = h;
	numofnodes = 0;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		numofnodes++;
	}
	return (numofnodes);
}

/**
 * get_index_address - g
 * @head: k
 * @index: f
 * Return: v
 */
listint_t *get_index_address(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int numofnodes;

	if (head == NULL)
	{
		return (NULL);
	}

	tmp = head;
	numofnodes = 0;
	while (tmp != NULL)
	{
		if (numofnodes == index)
		{
			return (tmp);

		}
		tmp = tmp->next;
		numofnodes++;
	}

	return (NULL);
}
