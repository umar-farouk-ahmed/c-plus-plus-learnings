#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n)
{
    for (int i = 0; i <=n-2 ; i++){
        for(int j=i+1 ; j<= n-1; j++){
            if(arr[j] > arr[i]){
                swap(arr[j],arr[i]);
            }
        }
    }
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    bubble_sort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}