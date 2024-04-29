#include "sort.h"
/**
 * selection_sort - selection
 * @array: 2
 * @size: 1
 * Return: void
*/
void selection_sort(int *array, size_t size)
{
size_t i;
size_t j;
int min;
int index;
size_t tmp;

tmp = 0;
for (i = 0; i < size; i++)
{
	min = *(array + i);
	for (j = i + 1; j < size; j++)
	{
		if (*(array + j) > min)
		{
			index = j;
			min =  *(array + j);
		}

	}
		if (min != *(array + i))
			{
			tmp = *(array + i);
			*(array + i) = min;
			*(array + index) = tmp;
			print_array(array, size);
			}
}
}
