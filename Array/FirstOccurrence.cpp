#include <iostream>
using std::cout;

int findFirstOccurrence(int target, int array[], int size)
{
    int start = 0, end = size - 1;

    while(start <= end)
    {
        int mid = start + (end - start)/2;

        if(array[mid] == target)
        {
            if(array[mid - 1] == target) // if target found check it previous element if previous element is same as target find target under this bound
            {
                end = mid - 1;
            }
            else return mid;
        }
        else if(array[mid] > target)
        {
            end = mid - 1;
        }
        else start = mid + 1;
    }

    return -1; // if element not found
}


int main()
{
    int array[] = {1,2,3,3,3,4,4,5,6,8,8};
    int size = sizeof(array)/sizeof(array[0]);
    int target = 7;

    cout << findFirstOccurrence(target, array, size);

    return 0;
}