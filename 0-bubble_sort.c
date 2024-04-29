#include "sort.h"
/**
 * bubble_sort - bubble sort
 * @array: array
 * @size: size
 * Return: void
*/
void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	size_t tmp;
	size_t next;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			next = j + 1;
			if (*(array + j) > *(array + next))
			{
				tmp = *(array + j);
				*(array + j) = *(array + next);
				*(array + next) = tmp;
				print_array(array, size);
			}
		}
	}

}
