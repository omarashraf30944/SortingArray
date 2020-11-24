#include <iostream>
using namespace std;

void selectionSort(int arr[] , int n){
    
    int minIdx ;
    
    for(int i = 0; i < n - 1; i++){
        minIdx = i;
        
        for(int j = i + 1 ;j < n ;j++){
            if(arr[j] > arr[minIdx]){
                minIdx = j;
                swap(arr[minIdx] , arr[i]);
                 for(int i = 0; i < 7; i++){
            cout<<arr[i]<<" "; 
        }
        cout<<"Swap";
        cout<<endl;
            }
        }
    }
    }
    
    void print(int arr[] , int size){
        for(int i = 0; i < size; i++){
            cout<<arr[i]<<" "; 
        }
        cout<<endl;
    }
int main(){
    int arr[] = {50,40,60,30,10,20,80};
    print(arr ,7);
    selectionSort(arr , 7);
    print(arr ,7);
    return 0;
}



