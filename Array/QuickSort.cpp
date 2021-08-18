#include <iostream>
using std::cout;
using std::endl;

void print(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swap(int *element_1, int *element_2)
{
    int temp = *element_1;
    *element_1 = *element_2;
    *element_2 = temp;
}

int partition(int arr[], int start, int end)
{

    int pivotElementIndex = start;

    while(start < end)
    {
        while(arr[start] >= arr[pivotElementIndex]) start++;    // Change Sign for decending Order
        while(arr[end] < arr[pivotElementIndex]) end--;    // Change Sign for decending Order
        
        if(start < end)
        {
            swap(&arr[start], &arr[end]);
        }
    }
    swap(&arr[pivotElementIndex], &arr[end]);
    return end;
}

void quickSort(int arr[], int start, int end)
{
    if(start < end)
    {
        int location = partition(arr, start, end);

        quickSort(arr, start, location - 1);
        quickSort(arr, location + 1, end);
    }
}

int main()
{

    int arr[] = {4,6,8,9,1,2,7,4,0,2};

    int size = sizeof(arr)/sizeof(arr[0]);

    print(arr,size);

    quickSort(arr, 0, size-1);

    print(arr,size);

    return 0;
}