#include <iostream>
#include <map>
using namespace std;

//map <key->number,value->frequency>
int main(){
    int arr[10] = {1,2,3,1,1,1,3,4,2,5};
    map<int,int> mpp;

    //pre-compute
    for(int i =0;i<10;i++){
        mpp[arr[i]]++;
    }

    for(auto it:mpp){
        cout<<"Frequency of the number: "<<it.first<<" is "<<it.second<<endl;
    }
    cout<<mpp[10]<<endl;
}