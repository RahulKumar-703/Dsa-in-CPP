#include <iostream>
using std::cout;

int binarySearch(int target, int array[], int size, bool isFindStart)
{

    int start = 0, end = size - 1;
    int ansIndex = -1;

    while(start <= end)
    {
        int mid = start + (end - start)/2;

        if(array[mid] == target)
        {
            ansIndex = mid;
            if(isFindStart)
            {
                end = mid - 1;      // if Finding starting Index 
            }
            else start = mid + 1;   // if Finding Last Index
        }
        else if(array[mid] > target)
        {
            end = mid - 1;
        }
        else start = mid + 1;
    }
    return ansIndex;
}

int countTarget(int target, int array[], int size)
{

    int count = 0;

    int startingIndex = binarySearch(target, array, size, true);
    int lastIndex = binarySearch(target, array, size, false);

    if(startingIndex == -1 && lastIndex == -1) return count;
    else
    {
        count = (lastIndex - startingIndex) + 1;
    }
    return count;
}

int main()
{
    int array[] = {1,3,5,5,6,7,9,9,9};

    int size = sizeof(array)/sizeof(array[0]);

    int target = 19;

    cout << countTarget(target, array, size);

    return 0;
}