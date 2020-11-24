#include <iostream>
using namespace std;


void insertionSort(int arr[] , int n){
    int key ,j ;
    for(int i = 1; i < n; i++){//{ 100 ,250, 33, 10, 50, 30}
        key = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}






void printArray(int arr[], int size){
    cout<<"[ ";
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<" ]";
    cout<<endl;
}



int main(){
    
    int arr[] = {10,64,2,97};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    mergeSort(arr , 0 , n-1);
    printArray(arr , n);
    
    
    return 0;
}
