#include <stdio.h>
void quicksort(int, int);
int partition(int, int);
void interchange(int, int);
int array[25];
int main()
{
    int size, i = 0;
    printf("Enter array size: ");
    scanf("%d", &size);
    printf("Enter array elements: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
	}
    quicksort(0, size - 1);
    printf("Sorting array elements: ");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", array[i]);
    }
    return 0; 
}
void quicksort(int low, int high)
{
    int pivotpos;
    if (low < high)
    {
        pivotpos = partition(low, high + 1);
        quicksort(low, pivotpos - 1);
        quicksort(pivotpos + 1, high);
    }
}
int partition(int low, int high)
{
    int pivot = array[low];
    int up = low, down = high;
    do
    {
        do
        {
            up = up + 1;
        }
        while (array[up] < pivot);
        do
        {
            down = down - 1;
        }while (array[down] > pivot);
        if (up < down)
        {
            int temp;
    		temp = array[up];
    		array[up] = array[down];
    		array[down] = temp;
        }
    } while (up < down);
    array[low] = array[down];
    array[down] = pivot;
    return down;
}