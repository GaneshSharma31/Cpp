#include<iostream>
using namespace std;
int main (){
    int n = 9 ; 
    int sum = 0;
    for ( int i=1 ; i <=n ; i +=2){
        sum += i;
    }
    cout << "Sum of odd numbers up to " << n << " is: " << sum << endl;
    return 0;
}