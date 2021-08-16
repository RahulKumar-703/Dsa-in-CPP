#include <iostream>
using std::cout;
using std::endl;

void print(int array[], size_t arraySize)
{
    for(int i = 0; i < arraySize; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void selectionSort(int arr[], size_t arrSize)
{

    for(int i = 0; i<arrSize -1; ++i)
    {
        int minElementIndex = i;    // let assume that the first element of unsorted array is smallest element;

        for(int j = i+1; j < arrSize; j++)
        {
            if(arr[j] < arr[minElementIndex]) minElementIndex = j;  // Change sign for decending order
        }

        if(minElementIndex != i)    // if the minElemnt is different from i(which we assumed) then swap with first element of unsorted array
        {
            int temp = arr[i];
            arr[i] = arr[minElementIndex];
            arr[minElementIndex] = temp;

        }
    }

}

int main()
{

    int array[] = {1,5,6,4,78,1,-4,0};

    int arrSize = sizeof(array)/sizeof(array[0]);

    print(array, arrSize);

    selectionSort(array,arrSize);

    print(array, arrSize);

    return 0;
}