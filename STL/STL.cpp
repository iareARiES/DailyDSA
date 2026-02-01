//C++ STL
// Contaiers 
//Pairs

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void explainPair(){
    pair<int, int> p1 = {1,3};
    cout<< p1.first <<" "<<p1.second<< endl;   //1 3

    //nested pair property
    pair<int, pair<int, int>> p2 = {1,{2,3}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl; // 1 2 3

    //array of pairs
    pair<int, int>arr[] = {{1,2},{2,5},{5,1}}; 
    cout<< arr[1].second<<endl;   //5
}



//Container 1 --> Vectors , vector is a container that is dynamic in size, its size can be increased after initialisation
//                unlike arrays that are fixed in size. Works similar to array just dynamic size

void explainVector(){
    vector<int> v;   //Creates an empty container

    v.push_back(1);  //takes 1 into the empty container
    v.emplace_back(2);  //places 2 after 1 in the container , faster than push_back


    //pair of vectors
    vector<pair<int,int>> vecpair;

    vecpair.push_back({1,2});
    vecpair.emplace_back(1,2);   //Syntax difference

    //Declare conatiner where elements are already present
    vector<int> vec(5,100);  //container with 5 instances of 100;
    vector<int> vect(5); //container with 5 elemnts value= 0, depends on the compiler STL containers never assigns garbage value however raw arrays does

    //pass the copy of the container
    vector<int> vecCopy(vec);

    //Dynamic size increaing of the container 
    vector<int > declaredvector(5,100); // {100,100,100,100,100}
    declaredvector.push_back(1);  // {100,100,100,100,100,1}  <--pushes 1 at the back , can use ensamble_back too
    

    //Access the elements in the vector 
    //1--> access in similar fashion as the array
    cout<< vect[0]<<" "<<vect.at(0);
    cout<<vect.back()<<endl;  //last element






    //2--> Iterator (points to the address of the memory)

    //Iterator:
    //let vector {10,20,30,40,50}

    vector<int>::iterator it1 = vec.begin();   //vec.begin --> points to the 1st element (memory address) thats 10

    it1++; //increasing the iterator 
    cout<<*(it1)<<" "; //accessing the memory element 


    vector<int>::iterator it2 = vec.end(); //points right after the last element that after 50
    //other functions(not used generally)
    vector<int>::reverse_iterator it3 = vec.rend(); // points at reverse end before 10
    vector<int>::reverse_iterator it4 = vec.rbegin(); //reverse begin points at the 50 even moves in the backward direction on increasing

    //looping
    vector<int> vecc = {10,20,30,40,50};
    for(vector<int>::iterator it5 = vecc.begin(); it5!=vecc.end();it5++){
        cout<< *(it5)<<" ";  // 10 20 30 40 50
    }



    //Auto function

    //one more method is there instead of vector<int>::iterator can directly use auto
    // int a = 5 , compiler knows its int we have assigned 
    // auto a = 5; compiler understands that 5 is an int and automatically asigns type as int
    // similarly auto can be used for vectors and other methods, its auto assignation

    for(auto it6 = vec.begin(); it6!=vec.end(); it6++){
        cout<< *(it6)<<" ";
    }

    for(auto it7 : vec){   // it reads as for each it7 in vec, its a sugar syntax for iterating over the container
        cout<< it7 <<" " ;
    }






    //erase function
    //let vec = {10,20,30,40,50}
    vec.erase(vec.begin()+1); //erase ->> {10,30,40,50} basically delete address vec.begin()+1

    //erase multiple elements erase(start address , end address) end is not enluded so basically it erases from begin to end-1
    vec.erase(vec.begin(),vec.begin()+4);






    //Insert function
    vector<int> vectr(2,100); //{100 100}
    vectr.insert(vectr.begin(),2,5);  // vectr.insert(where I have to insert, how many times I have to insert, what number I have to insert)
    //{5 5 100 100}

    vector<int> copy(2,50);  //insert this whole vector inside the desired vector
    vectr.insert(vectr.begin(),copy.begin(),copy.end()); //{50 50 5 5 100 100}


    //Other Functions
    cout<<vectr.size();
    vectr.pop_back();  // {50 50 5 5 100 100} pops out the last element
    vec.swap(vectr); //interchanges or swaps both the vector
    vectr.clear(); //clears the entire vectr
    cout<<vectr.empty(); //gives a boolean value if empty --> True otherwise fadqe
}



//Container 2 --> List
//its a container thats dynamic in nature like vector, but you get the frontal operations too
//Time complexity is less in list

void explainList(){
    list<int> dq;
    dq.push_back(2);  //{2}
    dq.emplace_back(4);  //{2 4}

    dq.push_front(5); //{5 2 4}
    dq.emplace_front(2); //{2 5 2 4}
    
    for(list<int>::iterator it = dq.begin(); it!=dq.end();it++){
        cout<<*(it)<<" ";
    }

    //or can use auto too
    //rest all the functions are similar to the vectors only
}






//Container 3 --> Deque
// same as vector

void explainDeque(){
    deque<int> dq;
    dq.push_back(2);  //{2}
    dq.emplace_back(4);  //{2 4}
    dq.push_front(5); //{5 2 4}
    dq.emplace_front(2); //{2 5 2 4}
    
    dq.pop_back();
    dq.pop_front();

    int a = dq.back();  //returns a value so have to store them
    int b = dq.front();

    for(deque<int>::iterator it = dq.begin(); it!=dq.end();it++){
        cout<<*(it)<<" ";
    }

    //or can use auto too
    //rest all the functions are similar to the vectors only
    //begin,end,rbegin,rend,clear,insert,size,swap
}






//Container 4 --> Stack
//works in LIFO : Last In First Out
//Time complexity of every operation: BigO(1) --> everything happens in constant time

void explainStack(){
    stack<int> st;
    st.push(1); //{1}
    st.push(2); //{2 1}
    st.push(3); //{3 2 1}
    st.push(4); //{4 3 2 1}
    st.emplace(5); //{5 4 3 2 1}

    cout<< st.top(); // 5  "st[2] is invalid cuz LIFO*"
    //top just prints the top most element from the stack but the elemet stays there

    st.pop();
    //pop pops out the last element and now the element is not there its deleted
    cout<< st.size();
    cout<< st.empty(); //gives boolean value
    
    stack<int> st1,st2;
    st1.swap(st2);

}





//Container 4 --> Queue
//all operations happens in the constant time BigO(1)
//FIFO --> First In First Out 

void explainQueue(){
    queue<int> q;
    q.push(1); //{1}
    q.push(2); //{1, 2}
    q.emplace(4); //{1, 2, 4}

    q.back()+=5; //-->> takes the last element and adds 5 to it
    
    cout<< q.back(); //9
    cout<<" "<< q.front(); //1

    q.pop(); //deletes the frontal member 1 from the stack, no data is returned
    
    //size swap empty same as stack
}





//Container 5 --> Priority Queue
//largest element have highest priority --> data is not maintained linearly here its more like a tree structure
//push - log(n), top - BigO(1), pop - log(n) (Time complexity)

void explainDQ(){
    priority_queue<int>pq;  //Maximum Heap

    pq.push(5);  // {5}
    pq.push(2);  // {5 2} 
    pq.push(8);  // {8 5 2}
    pq.push(10); // {10 8 5 2}

    cout<< pq.top();  //--> 10
    pq.pop() ; // takes out 10

    //size swap empty function same as others

    //Minimum Heap or min priority queue
    priority_queue<int, vector<int>, greater<int>> pq;  //-> min value --> max priority
    pq.push(5);
    pq.push(2);
    pq.push(8); //{2,5,8}
    pq.emplace(10); //{2,5,8,10}

    cout<< pq.top(); //-->2

}




//Container 6 --> Set
// stores everything in a sorted manner and is unique
// stores everything in s tree form
// Time complexity every function - log(n)

void explainSet(){
    set<int>st;
    st.insert(1); //{1}
    st.emplace(2); //{1 2}
    st.insert(2); //{1 2} since 2 is already there will not store another 2
    st.insert(4); //{1,2,4}
    st.insert(3); //{1 2 3 4}

     
    auto it = st.find(3); // returns an iterator pointing the position of 3 if prresent
    auto it2 = st.find(6); // if 6 is not present then it will return iterator set.end() that is after the last element

    st.erase(5); //delete the 5 

    //{1 2 3 4 5 6}
    auto it3 = st.find(2);
    auto it4 = st.find(4);


    st.count(2); //if 2 present gives 1 if not then 0

    st.erase(it3,it4);  // it will delete from it3---(it4-1)

    //many functions similar to vectors

    //have to study this
    auto it5 = st.upper_bound(3);
    auto it6 = st.lower_bound(4);

}





//Container 7 ---> 
//everything same as set, sorted just store duplicate also 

void explainMultiSet(){
    multiset<int>ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    ms.erase(1); // erases all the occurence of 1
    ms.erase(ms.find(1));  //  //if you want to delete only one occurence can delete the iterator
    ms.erase(ms.find(1), ms.find(1)+2); // deletes 2 occurences of 1 simeltaneously

    ms.count(1); //gives total number of 1

}




//Container 8 --->
//Unordered set --> stores in randomised order rest all same as set, have unique elements 
//Time complexity --> O(1) since it doesnt store anything in order that by better complexity then set i.e const time 
//but once in a million can be O(n) this is the worst case but happens with once in a million possiblity
//lower_bound and upper_bound functions doesnt work rest all are the same as set
void explainUSet(){
    unordered_set<int> st;
}






//Container 9 ---> Map container
//stores like key and values, stores unique keys but values can be duplicate
//Map stores unique keys in sorted order similar to set data structure
// log(n) time complexity

void explainMap(){
    //  key  value 
    map<int, int> mpp; //1st

    map<int , pair<int, int>> mpp2;

    map<pair<int,int>,int> mpp3;

    //1st
    mpp[1] =2; // stores like for key 1 store the value 2  {1,2}
    mpp.emplace(3,1);   // {3,1}
    mpp.insert({2,4});  // {2,4}

    mpp3[{2,3}] =10; // {{2,3}, 10} 

    for(auto it : mpp){
        cout<< it.first <<" "<<it.second <<endl;  //it.first is the key and it.last is the value
    }

    cout << mpp[1];//gives the map of 1 prints 2, if doesnt presnet gives NULL and prints 0



    // if you wanna find the iterator then
    auto it = mpp.find(2); 
    auto it = mpp.find(5); // not present--> points after the last the element
    cout<<(*it).first; //prints the key i.e 2
    cout<< (*it).second; // prints the value i.e 3

    //OR

    cout << it->first << " " << it->second;  //can print like this

    //STUDY THIS
    auto it = mpp.lower_bound(2);
    auto it = mpp.upper_bound(3);

    //erase, swap, size, empty, are same as above
}





//Container 10 --> Multi Map
// same thing as map but here you can store same keys multiple times and sorted
// O(1) time complexity 
void explainMultiMap(){

}

//Container 11 --> Unordered Map
// saves everything unorderd but unique keys rest all same as Map
// O(1) complexity worst case O(n) [ once  in million ]
void explainUnorderedMap(){
    
}






//Algorithm explains some important that use in day to day DATA STRUCTURES
// for vectors arrays list etc etc max all containers

bool comp(pair<int, int> p1, pair<int,int>p2){
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false; //it will return false and the elements will get swappedd internally
    //if they are same

    if(p1.first>p2.first) return true;
    return false;

}


void explainExtra(){

    //1st
    int a1[] = {5, 3, 1, 4};
    //sort anything ascending order
    sort(a1,(a1+4));// (start,end) end not included
    sort(v.begin(),v.end()); //if using vector v

    //sort some part 
    sort(a1+2,a1+4);

    //sort in descending order
    sort(a1,a1+4,greater<int>()); //greater<int> --> inbuilt comparator


    //sort in some other fashion
    pair<int,int> a[] = {{1,2},{2,1},{4,1}};
    //sort it according to second element increasing
    //if second element is same, then sort
    //-it arrording to first elemnt but in decending

    sort(a,a+4,comp); // where comp is the self declared / coded boolean comparator


    //2nd
    int num =7;
    int cnt = __builtin_popcount(num);  //returns how many set bits(1) are there

    long long num2 = 1234567898765432;
    int cnt2 = __builtin_popcountll(num2);  // only becomes ll thats all


    //3rd ---> next permuutations
    //one issue --> to get all the permutations start from the sorted combination i.e 123 not 321
    string s = "123"; //123 231 321 .......(more permutations)
    do{
        cout<<s<<endl;
    } while(next_permutation(s.begin(),s.end()));  // at last it becomes NULL and returns false



    //3rd max_element and min_element
    //returns the iterator of max element in the array, vector, etc 
    int a3[] = {1,2,3,4,5,6,7,10};
    int maxi = *max_element(a3,a3+4);
    int mini = *min_element(a3,a3+4);

}

int main(){

    return 0;
}