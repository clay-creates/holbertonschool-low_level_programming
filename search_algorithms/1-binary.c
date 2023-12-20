#include "search_algos.h"

/**
 * print_array - prints an array
 * @array: array to print
 * @size: size of array
 */

void print_array(int *array, size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 *
 * Return: returns the index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
    int low, mid, high;

    if (array == NULL)
    {
        return -1;
    }

    print_array(array, size);

    low = 0;
    high = size - 1;

    while (low <= high)
    {
        mid = low + (high - low) / 2;

        if (array[mid] == value)
        {
            return mid;
        }

        if (array[mid] < value)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }

        print_array(array, size);
    }

    return -1;
}