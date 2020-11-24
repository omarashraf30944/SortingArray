#include <iostream>
using namespace std;


int partition( int arr[], int iBegin, int jEnd){
    int i = iBegin;
    int j = jEnd;
    int pivloc = i;
    while (true){
        while(arr[pivloc] <= arr[j] && pivloc != j){
            j--;
        }
        if (pivloc == j){
            break;
        }else if(arr[pivloc] > arr[j]){
            swap(arr[j] , arr[pivloc]);
            pivloc = j;
        }
        while (arr[pivloc] >= arr[i] && pivloc != i){
            i++;
        }
        if(pivloc == i){
            break;
        }
        else if(arr[pivloc] < arr[i]){
            swap(arr[i] , arr[pivloc]);
            pivloc = i;
        }
        return pivloc;
    }
}
  
void quickSort(int arr[], int l, int h){
    if(l < h){
        int piv = partition(arr,l,h);
        quickSort(arr,l,piv-1);
        quickSort(arr,piv+1,h);
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
