/*
    LeetCode question Link - https://leetcode.com/problems/find-in-mountain-array
    
    Question - Search For an Element In A Mountain Array

    Input - [1,2,6,8,5,4,2]  target = 6
    Output - 2 (Index Of 6)
*/


#include <iostream>
using std::cout;

// Finding The Peek Element
int findPeek(int arr[], size_t size)
{
    int start = 0, end = size - 1;

    while(start < end)
    {
        int mid = start + (end - start)/2;

        if(arr[mid] > arr[mid+1])
        {
            end = mid;
        }
        else
        {
            start = mid + 1;
        }
    }
    return start;
}

// Modified Binary Search For Both Accending And Decending Order Array
int binarySearch(int target, int arr[], int start, int end, bool isAccending)
{
    if(start >= end)
    {
        if(arr[start] == target) return start;
        else return -1;
    }
    else
    {
        int mid = start + (end - start)/2;
        if(isAccending)
        {
            if(arr[mid] == target) return mid;
            else if(arr[mid] > target) return binarySearch(target, arr, start, mid - 1, true);
            else return binarySearch(target, arr, mid+1, end, true);
        }
        else
        {
            if(arr[mid] == target) return mid;
            else if(arr[mid] < target) return binarySearch(target, arr, start, mid - 1, false);
            else return binarySearch(target, arr, mid+1, end, false);
        }
    }
}

int findIndexOf(int target, int arr[], size_t size)
{
    int peek = findPeek(arr,size);      // finding The Peek (greatest) Element

    // Running Binary Search Right to The Peek Element
    int searchInRight = binarySearch(target, arr, peek+1, size - 1, false);

    // If Element not Found in Right Side Then Find in Left Side of the Peek Element
    if(searchInRight == -1) return binarySearch(target, arr, 0, peek, true);

    return searchInRight;
}

int main()
{

    int arr[] = {1,2,4,5,7,3,2,1};

    int size = sizeof(arr)/sizeof(arr[0]);

    int target = 1;

    cout << findIndexOf(target, arr, size);


    return 0;
}