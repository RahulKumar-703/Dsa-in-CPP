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

void insertionSort(int array[], size_t arraySize)   // size_t is basically a datatpye to hold container size (Similar to unsigned int)
{
    for(int i = 1; i< arraySize; i++)
    {
        int temp = array[i];

        int j = i-1;
        while(j >=0 && array[j] > temp) // change condition for decending order
        {
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = temp;
    }
}

int main()
{
    int arr[] = {1,5,6,9,4,13,0};
    size_t arraySize = sizeof(arr)/sizeof(arr[0]);

    print(arr,arraySize);

    insertionSort(arr, arraySize);

    print(arr,arraySize);

    return 0;
}