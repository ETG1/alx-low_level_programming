#include "search_algos.h"

/**
 * recursive_search - searches for a value in an array
 * of integers using the Binary search algorithm
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 *
 * Return: index of the number
 */


int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
    if (array == NULL)
    {
        return -1;
    }


    while (left <= right)
    {
        int mid = left + (right - left) / 2;


        if (array[mid] == value)
        {
            return mid;
        }


        if (array[mid] < value)
        {
            left = mid + 1;
        }

        else
        {
            right = mid - 1;
        }
    }


    return -1;
}
