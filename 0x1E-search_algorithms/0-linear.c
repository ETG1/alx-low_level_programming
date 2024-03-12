#include "search_algos.h"

/**
 * linear_search - A function that searches for a value in an
 * array of integers using the Linear search algorithm
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 *
 * Return: Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
    int j;

    if (array == NULL)
    {
        return -1;
    }


    for (j = 0; j < (int)size; ++j)
    {
        printf("Value checked array[%i] = [%i]\n", j, array[j]);
        if (array[j] == value)
            return j;
        
    }


    return -1;
}
