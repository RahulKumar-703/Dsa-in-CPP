/**
 * Question Leetcode Link - https://leetcode.com/problems/find-peak-element/
 * 
 * Q. Find The Peek of Mountain Array
 * 
 * -> Mountain Array = [1,3,5,6,4,2,1] (first increasing and then decreasing)
 * 
 * Input = {1,2,4,7,3,2}
 * Output = 7 (maximum or peek element)
 * 
 **/

#include <iostream>
using std::cout;

int findPeekElement(int array[], size_t size)
{
    int start = 0, end = size - 1;

    while(start < end)
    {
        int mid = start + (end - start)/2;

        if(array[mid] > array[mid+1])
        {
            // it means we are in deccending part of array and mid can be a peek element
            // so search left side of array including mid element

            end = mid;
        }
        else
        {
            // if not in deccending part then we are in accending part of array
            // so search in the right side of array

            start = mid + 1;
        }
    }
    // at the end start and end pointer will be at same index pointing to peek element
    // so return peek element
    return array[start];
}

int main()
{

    int array[] = {1,2,3,5,7,3,2,1};
    int size = sizeof(array)/sizeof(array[0]);

    cout << findPeekElement(array,size);

    return 0;
}