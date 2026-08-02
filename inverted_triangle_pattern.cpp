#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0;i<=n;i++){          // when i=0; print j=n-i; when i=1; j=n-i
        for(int j=0;j<n-i;j++){
            cout << "*";
        }
        cout << endl;
    } 
    return 0;
} 