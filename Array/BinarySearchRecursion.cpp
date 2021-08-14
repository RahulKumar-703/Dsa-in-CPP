#include <iostream>
using std::cout;

int binarySearch(int element, int array[], int start, int end)
{

    if(start >= end)
    {
        if(array[start]==element) return start;
        else return -1;
    }
    else
    {
        // int mid = (start + end)/2;  // It may OverFlow In Some Cases

        int mid = start + (end - start)/2;  // It is not adding directly start and end.

        if(array[mid] == element) return mid;
        else if (array[mid] > element) return binarySearch(element, array, start, mid-1);
        else return binarySearch(element, array, mid+1, end);

    }
}

int main()
{

    int arr[] = {1,2,4,6,7,11,21};

    cout << binarySearch(-11, arr, 0, sizeof(arr)/sizeof(arr[0]));

    return 0;
}