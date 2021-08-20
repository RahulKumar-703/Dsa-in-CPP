#include <iostream>
using std::cout;


int ceiling(int target, int array[], int size)
{

    int start = 0;
    int end = size - 1;

    if(target > array[end]) return -1;    // if target is greater than maximum element of array then we return -1.

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
    return array[start]; // if no element is equal to target then return next greater element.
}

int main()
{

    // Question - Find Ceiling of an given Element from an sorted array
    //  or
    // find Smallest Number grater than given element from an sorted array

        int arr[] = {3,4,6,7,8,9,12,32}; // array is sorted
        int size = sizeof(arr)/sizeof(arr[0]);

        cout << ceiling(35, arr, size);



    return 0;
}