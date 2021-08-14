#include <iostream>
using std::cout;

int binarySearch(int element, int array[], int start, int end)
{

    // base Condition
    if(start >= end)
    {
        if(array[start]==element) return start; //Return index if found
        else return -1; // Return -1 if not found
    }
    else
    {
        // int mid = (start + end)/2;  // It may OverFlow In Some Cases

        int mid = start + (end - start)/2;  // It is not adding directly start and end.

        if(array[mid] == element) return mid;
        else if (array[mid] > element) return binarySearch(element, array, start, mid-1);   // if element at mid index is graeter than desired element then discard the half array(of smaller side) and again search in another half
        else return binarySearch(element, array, mid+1, end);

    }
}

int main()
{

    int arr[] = {1,2,4,6,7,11,21};

    // Passed parameters as element, arrray, startting index of array, ending index of array (size)

    cout << binarySearch(-11, arr, 0, sizeof(arr)/sizeof(arr[0]));

    return 0;
}