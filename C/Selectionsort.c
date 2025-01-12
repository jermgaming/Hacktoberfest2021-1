
#include <stdio.h>
 
void swap(int *value, int *anotherValue)
{
    int temp = *value;
    *value = *anotherValue;
    *anotherValue = temp;
}
 
void selectionSort(int array[], int numberOfElements)
{
    int idx, innerIdx, min_idx;
 
    for (idx = 0; idx < numberOfElements-1; idx++)
    {
        min_idx = idx;
        for (innerIdx = idx+1; innerIdx < numberOfElements; innerIdx++)
          if (array[innerIdx] < array[min_idx])
            min_idx = innerIdx;
 
        swap(&array[min_idx], &array[idx]);
    }
}

int main()
{
    int numberOfElements, index;
    printf("Enter total number of elements: \n");
    scanf("%d", &numberOfElements);
    printf("Enter %d numbers: \n", numberOfElements);
    int array[numberOfElements];
    for (index = 0; index < numberOfElements; index++)
    {
        scanf("%d", &array[index]);
    }
    selectionSort(array, numberOfElements);
    printf("Sorted array is: \n");
    for (index = 0; index < numberOfElements; index++)
        printf("%d ", array[index]);
    return 0;
}
