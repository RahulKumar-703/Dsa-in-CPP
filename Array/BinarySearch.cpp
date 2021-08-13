#include <iostream>
using std::cout;

int binarySearch(int element, int array[], size_t arraySize)
{

    int start = 0, end = arraySize;
    
    while(start <= end)
    {
        int mid = (start+end)/2;

        if(element == array[mid]) return mid;
        else if(element < array[mid])
        {
            end = mid -1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1,3,4,5,7,29,34};

    cout << binarySearch(9, arr, sizeof(arr)/sizeof(arr[0]));

    return 0;
}