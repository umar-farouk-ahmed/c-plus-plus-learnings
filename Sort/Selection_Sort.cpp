#include<iostream>
using namespace std;

void selection_sort(int array[], int n){
    for(int i=0;i<=n-2;i++){
        int min=i;
        for(int j=i;j<=n-1;j++){
            if(array[j] < array[min]){
                min = j;
            }
        }
        // swap(array[i],array[min]);
        int temp = array[i];
        array[i] = array[min];
        array[min] = temp;
    }
}

int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout<<"Enter the elements : ";
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    selection_sort(arr,size);
    for(int i=0;i<size;i++){
        cout <<  arr[i] << " ";
    }
}