#include <iostream>
using std::cout;

int binarySearch(int element, int array[], size_t arraySize)
{

    int start = 0, end = arraySize;
    
    while(start <= end)
    {
        // Initializing Mid Point Of Array
        int mid = (start+end)/2;

        // If Element at mid point itself is desired element then return it
        if(element == array[mid]) return mid;
        else if(element < array[mid])   // Else Check if element at mid point is greater than desired element then search before mid element
        {
            end = mid -1;
        }
        else       // Else search after mid element
        {
            start = mid + 1;
        }
    }
    return -1;      // If element not found return -1
}

int main()
{
    int arr[] = {1,3,4,5,7,29,34};

    cout << binarySearch(9, arr, sizeof(arr)/sizeof(arr[0]));

    return 0;
}