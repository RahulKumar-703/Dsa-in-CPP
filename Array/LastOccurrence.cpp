#include <iostream>
using std::cout;


int findLastOccurrence(int target, int array[], int size)
{
    int start = 0, end = size - 1;

    while(start <= end)
    {
        int mid = start + (end - start)/2;

        if(array[mid] == target)
        {
            if(array[mid + 1] == target)    // check if next element is equal to target if it is then check after that index for target
            {
                start = mid + 1;
            }
            else return mid;
        }
        else if(array[mid] > target)
        {
            end = mid - 1;
        }
        else start = mid + 1;
    }

    return -1;  // if element not found
}

int main()
{

    int array[] = {1,2,2,3,3,4,4,4,6,7,7,9};
    int size = sizeof(array)/sizeof(array[0]);
    int target = 5;

    cout << findLastOccurrence(target, array, size);


    return 0;
}