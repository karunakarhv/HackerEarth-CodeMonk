#include <stdio.h>
#include <stdlib.h>

int binarySearch(long *array, int low, int high, int key)
{
    
    while(low<=high)
    {
        int mid = (low + high)/2;
        if(array[mid] > key)
        {
            high = mid - 1;
        }
        else if(array[mid] < key)
        {
            low = mid + 1;
        }
        else
            return mid;
    }
    return -1;
}

//Sort the array in ascending order
void bubbleSort(long *array, int low, int high)
{
    int i = 0, j = 0;
    long temp = 0;
    for(i = 0; i < high - 1; i++)
    {
        for(j = 0; j < high - 1 - i; j++)
        {
            if(array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int main(int argc, char *argv[])
{
    int N = 0, q = 0, x = 0, i = 0, pos = 0;
    long *array;
    
    scanf("%d", &N); // No.of.elements
    array = (long *) malloc(N * sizeof(long));
    //Input the array elements
    for(i = 0; i < N; i++)
        scanf("%ld",&array[i]);
    //Sort the elements in ascending order
    //bubbleSort(array, 0, N); - Taking lot of time
    qsort(array, N, sizeof(long), cmpfunc);
    //No.of.Queries
    scanf("%d",&q);
    //Key Element
    for(i = 0; i < q; i++)
    {
        scanf("%d",&x);
        pos = binarySearch(array, 0, N, x);
        printf("%d\n",pos+1);
    }
}
