//MERGE SORT ALGORITHM

#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr,int low, int mid,int high){
  vector<int> temp;
  int left = low;
  int right = mid+1;
  while(left<=mid && right<=high){
    if(arr[left]<=arr[right]){
      temp.push_back(arr[left]);
      left++;
    }
    else{
      temp.push_back(arr[right]);
      right++;
    }
  }
  while(left<=mid) temp.push_back(arr[left++]);
  while(right<=high) temp.push_back(arr[right++]);
  
  for(int i =low;i<=high;i++){
    arr[i] = temp[i-low];
  }
  
}

void mergeSort(vector<int>& arr,int low,int high){
  if(low>=high) return; //base condition
  int mid = (high + low)/2;
  mergeSort(arr,low,mid);
  mergeSort(arr,mid+1,high);
  merge(arr,low,mid,high);
}

int main(){
  //take the input vector
  int n,x;
  cout<<"Enter the Length of the array: ";
  cin>> n;
  cout<<endl;
  vector<int> arr(n);
  for(int i =0; i<n;i++){
    cin>> arr[i];
  }
  //starting the sorting
  int low = 0;
  int high = arr.size()-1;
  mergeSort(arr,low,high);
  
  cout << "Sorted array: ";
  for (int x : arr) {
      cout << x << " ";
  }
  return 0;
}