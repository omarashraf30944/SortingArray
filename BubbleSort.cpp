#include <iostream>
using namespace std;


void bubbleSort(int arr[] , int n){
    bool flag = true;
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                
                swap(arr[j],arr[j+1]);
                
                flag = false;
                 
            }
        }
if (flag == true ){
    break;
}
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
    
    int arr[] = { 100 ,250, 33, 10, 50, 30};
    int n = sizeof(arr) / sizeof(arr[0]) ;
    
    bubbleSort(arr , n);
    printArray(arr , n);
    return 0;
}