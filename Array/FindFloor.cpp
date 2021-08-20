#include <iostream>
using std::cout;


int floor(int target, int array[], int size)
{

    int start = 0;
    int end = size - 1;

    if(target < array[start]) return -1;    // if target is greater than maximum element of array then we return -1.

    while(start <= end)
    {
        int mid = start + (end - start)/2;

        if(array[mid] == target)
        {
            return array[mid];
        }
        else if(array[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return array[end]; // if no element is equal to target then return next greater element.
}


int main()
{

    // Question - Find Floor of given element from an sorted array
    //  or
    // Find The Greatest element smaler than given element from an sorted array
    
        int arr[] = {3,4,6,7,8,9,12,32}; // array is sorted
        int size = sizeof(arr)/sizeof(arr[0]);

        cout << floor(1, arr, size);

    return 0;
}