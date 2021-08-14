#include <iostream>
using std::cout;


// function for printing the array
void print(int array[], int size)
{
    for(int i = 0; i< size; i++)
    {
        cout << array[i] << " ";
    }
    cout << "\n";
}

void bubbleSort(int array[], int arraySize)
{
    for(int i = 0; i<arraySize - 1; i++)
    {
        bool isSorted = true;   // if array is already sorted we will break the loop
        for(int j = 0; j<arraySize-1-i; j++) // some improvement
        {
            if(array[j] > array[j+1])   // I am sorting in decending Order if i place (array[j] > array[j+1]) it will sort in decending order
            {
                // Swap lower element with greater
                int tmp = array[j];
                array[j] = array[j+1];
                array[j+1] = tmp;

                // if we entered in this loop it means array is not sorted
                isSorted = false;
            }
        }
        if(isSorted) break;
    }
}

int main()
{
    int arr[] = {1,3,4,5,2,1,9,6,19,12};

    const int arrSize = sizeof(arr)/sizeof(arr[0]);

    print(arr, arrSize);

    bubbleSort(arr, arrSize);

    print(arr, arrSize);

    return 0;
}