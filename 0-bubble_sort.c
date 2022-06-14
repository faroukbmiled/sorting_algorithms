#include "sort.h"

/**
 * bubble_sort - function that sort an array of numeric elements in ascendant
 * order.
 * @array: array that contains the numbers to be sorted
 * @size: the number of elements of the array
 * Return: Void
*/
void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
	size_t j = size;
	int temp;

	if (array == NULL || size < 2)
	{
		return;
	}
	for (; i < j ; j--)
	{
		for ( ; i < j - 1 ; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
		}
		i = 0;
	}
}
