#include "sort.h"
/**
 * heapify - modify the heap and sort
 * @array: array to be sorted
 * @size: array's size
 * @n: size of heap
 * @i: root node
 * Return: nothing
 */
void heapify(int *array, size_t n, size_t i, size_t size)
{
	size_t largest, left, right;
	int swap;

	largest = i;
	left = 2 * i + 1;
	right = 2 * i + 2;
	if (left < n && array[left] > array[largest])
		largest = left;
	if (right < n && array[right] > array[largest])
		largest = right;
	if (largest != i)
	{
		swap = array[largest];
		array[largest] = array[i];
		array[i] = swap;
		print_array(array, size);
		heapify(array, n, largest, size);
	}
}


/**
 * heap_sort - implementation of heap sort algorithm
 * @array: array to be sorted
 * @size: array's size
 * Return: nothing
 */
void heap_sort(int *array, size_t size)
{
	size_t i;
	int swap;

	if (!array || size < 2)
		return;
	for (i = (size - 2) / 2 + 1; i > 0; i--)
		heapify(array, size, i - 1, size);
	for (i = size; i > 0; i--)
	{
		swap = array[i - 1];
		array[i - 1] = array[0];
		array[0] = swap;
		print_array(array, size);
		heapify(array, i - 1, 0, size);
	}
}

