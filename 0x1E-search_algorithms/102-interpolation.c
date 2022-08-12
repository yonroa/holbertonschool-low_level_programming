#include "search_algos.h"

int interpolation_search(int *array, size_t size, int value)
{
    if (!array)
        return (-1);
    return (searchPos(array, 0, size - 1, value));
}

int searchPos(int *array, size_t lo, size_t hi, int value)
{
    int pos;

    if (lo <= hi && value >= array[lo] && value <= array[hi])
    {
        pos = lo + (((value - array[lo]) * (hi - lo)) / (array[hi] - array[lo]));
        printf("Value checked array[%i] = [%i]\n", pos, array[pos]);

        if (array[pos] == value)
            return (pos);
        if (array[pos] < value)
            return (searchPos(array, pos + 1, hi, value));
        if (array[pos] > value)
            return (searchPos(array, pos, hi - 1, value));
    }
    printf("Value checked array[%i] is out of range\n", pos);
    return (-1);
}
