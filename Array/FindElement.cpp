#include <iostream>
using std::cout;
using std::endl;

int findIndexOf(int element, int array[], size_t arraySize)
{
    for(int i=0; i<arraySize; i++)
    {
        // Returning Index Of that element
        if(array[i] == element) return i;
    }

    cout << endl;

    // Returning -1 If Element Not Found.
    return -1;
}

int main()
{
    int arr[] = {1,2,3,7,8,5};
    
    cout << findIndexOf(3, arr, sizeof(arr)/sizeof(arr[0]));    // O/p - 2
    cout << findIndexOf(6, arr, sizeof(arr)/sizeof(arr[0]));    // O/p - -1 


    return 0;
}