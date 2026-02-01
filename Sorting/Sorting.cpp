#include <iostream>
using namespace std;

//move min elemnt at the first swap its position with the first element (starting part)
void selectionSort(int arr[], int n){
    for(int i =0;i<=n-2;i++){ //outer loop doesnt need to check for last elemet
        int mini =i;
        for(int j =i+1;j<=n-1;j++){
            if(arr[mini]>arr[j]){
                mini =j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }

}

//adjacent elemnts swap(j,j+1)
void bubbleSort(int arr[], int n){
    for(int i = n-1;i>=0;i--){
        int didSwap =0;
        for(int j =0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                didSwap =1;
            }
        }
        if(didSwap == 0){  //we check forr the first time basically 1st loop if nothing changes then 
                          //it means it already ordered no need to check the 2nd time so break the loop
            break;
        }

        cout<<"runs\n" ;
    }
}



void insertionSort(int arr[],int n){
    for(int i =0;i<n;i++){
        int j =i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp = arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
    }
}
//[45 34 23 12 25 89 10 9]
int main(){
    int arr[5];
    int len = 5;
    for(int i = 0;i<len;i++){
        cin>> arr[i];
    }

    insertionSort(arr,len);
    for(int i=0;i<len;i++){
        cout<< arr[i]<<" ";
    }

    return 0;
}