//recursion practice
//multiple recursion

#include <iostream>
#include <algorithm>
using namespace std;

void  reverse(int l, int n, int array[]){
    if(l>=n/2){  
        return ;
    }
    swap(array[l],array[n-l-1]);
    reverse(l+1,n,array);
}


bool isPalindrome(int l, string str){
    if(l>=str.size()/2){
        return true;
    }
    if(str[l]!=str[str.size()-l-1]){
        return false;
    }
    return isPalindrome(l+1,str);
}


int fibonacci(int n){
    if(n<=1){
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);    
}

int main(){
    //----------------------REVERSE-------------------------
    // int array[5] = {1,2,3,4,5};    
    // int n =5;
    // reverse(0,5,array);
    // for(int i =0;i<5;i++){
    //     cout<<array[i]<<" ";
    // }

    //-------------------isPalindrome-----------------------
    // string str;
    // cin>> str;
    // cout<<isPalindrome(0,str);
    // return 0;

    //------------------Fibonacci--------------------------
    // cout<<fibonacci(2);


}