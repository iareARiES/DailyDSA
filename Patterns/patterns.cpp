#include <iostream>
using namespace std;

void pattern1(int n) {
    /*
    Enter the number of rows: 5
    *****
    *****
    *****
    *****
    *****
    */
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << '*';
        }
        cout << endl;
    }
}

void pattern2(int n) {
    /*
    Enter the number of rows: 5
    *
    **
    ***
    ****
    *****
    */
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << '*';
        }
        cout << endl;
    }
}

void pattern3(int n) {
    /*
    Enter the number of rows: 5
    1
    22
    333
    4444
    55555
    */
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << i + 1;
        }
        cout << endl;
    }
}

void pattern4(int n) {
    /*
    Enter the number of rows: 5
    1
    12
    123
    1234
    12345
    */
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << j + 1;
        }
        cout << endl;
    }
}

void pattern5(int n) {
    /*
    Enter the number of rows: 5
    *****
    ****
    ***
    **
    *
    */
    for (int i = 0; i < n; i++) {
        for (int j = n; j > i; j--) {
            cout << '*';
        }
        cout << endl;
    }
}

void pattern6(int n) {
    /*
    Enter the number of rows: 5
    12345
    1234
    123
    12
    1
    */
    for (int i = 0; i < n; i++) {
        for (int j = n; j > i; j--) {
            cout << (n - j + 1);
        }
        cout << endl;
    }
}

void pattern7(int n) {
    /*
    Enter the number of rows: 5
        *
       ***
      *****
     *******
    *********
    */
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern8(int n){
    /*
    Enter the number of rows: 5
    *********
     *******
      *****
       ***
        *
    */
    for(int i=n ; i>0;i--){
        for(int j=n;j>i;j--){
            cout<<" ";
        }
        
        for(int j=0;j<2*i-1;j++){
            cout<<"*";
        }

        cout<<endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    pattern8(n);
    return 0;
}
