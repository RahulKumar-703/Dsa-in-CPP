#include <iostream>
using std::cout;

// Simple Binary Search
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


int findIndexOf(int target, int array[])
{

    int start = 0, end = 2;     // let first search in this range

    while(array[end] < target)
    {
        // double the search Range
        int temp = start;
        start = end + 1;
        end = end + (end - temp + 1)*2;
    }

    return binarySearch(target, array, start, end);
    

}



int main()
{

    int arr[] = {1,2,3,5,5,6,7,8,12,14,16,19,32};       // assume it is an infinite array we dont know its size

    cout << findIndexOf(9,arr);

    return 0;
}