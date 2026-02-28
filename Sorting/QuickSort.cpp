#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int pivotIndex(vector<int> &vec, int low , int high){
    int i = low;
    int j = high;
    int pivot = vec[low];
    while(i<j){ //dont let bounds to cross eachother
        while(vec[i]<=pivot && i<=high-1) i++;  //in left search for element larger than pivot
        while(vec[j]>pivot && j>=low-1) j--;   //int right search for element smaller than pivot
        if(i<j){
            swap(vec[i],vec[j]);
        }
    }
    swap(vec[low],vec[j]); //put the pivot at its correct place in the array. 
    return j;
}

void quickSort(vector<int> &vec,int low, int high){
    if(low<high){
        int index = pivotIndex(vec,low,high);
        quickSort(vec, low, index-1);
        quickSort(vec,index+1,high);int indexP = 0;
    }
}

int main(){
    vector<int> vec = {6,2,1,9,12,5,7};
    int n = vec.size();
    int low = 0;
    int high = n-1;
    quickSort(vec,low,high);
    for(auto it : vec){
        cout<<it<<" ";
    }
    return 0;
}

