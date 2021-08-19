#include "iostream"
using std::cout;
using std::endl;

void print(int arr[], int size)
{
    for(int i = 0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
    cout <<  endl;
}

void merge(int arr[], int low, int mid, int heigh)
{

    int i = low, j = mid + 1, k = low, tempArr[heigh];

    while(i <= mid && j <= heigh)
    {
        if(arr[i] <= arr[j])        // change the sign for decending order
        {
            tempArr[k++] = arr[i++];
        }
        else
        {
            tempArr[k++] = arr[j++];
        }
    }
    while(i <= mid)
    {
        tempArr[k++] = arr[i++];
    }
    while(j <= heigh)
    {
        tempArr[k++] = arr[j++];
    }

    for(i = low; i <= heigh; i++)   // already i is declared so we use that too
    {
        arr[i] = tempArr[i];
    }
}

void mergeSort(int arr[], int low, int heigh)
{
    if(low < heigh)
    {
        int mid = low + (heigh - low)/2;

        mergeSort(arr, low , mid);
        mergeSort(arr, mid+1, heigh);

        merge(arr, low, mid, heigh);
    }
}

int main()
{
    int arr[] = {9,2,4,73,3,8,4,0,-2};

    int size = sizeof(arr)/sizeof(arr[0]);

    print(arr, size);

    mergeSort(arr, 0, size -1);

    print(arr, size);

    return 0;
}