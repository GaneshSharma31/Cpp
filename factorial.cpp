#include <iostream>
using namespace std;
int main (){
    int n, fact = 1; ; 
    cout<<  "enter a number to find its factorial : ";
    cin >> n;
    if ( n < 0 ) {
        cout << "factorial of negative number is not defined" << endl;
    } else {
        
    
    for(int i=1 ; i<=n ; i++ ) {
    
        fact = fact * i;
    } 
    cout  << fact << endl;
 
    cout << endl;}
    return 0 ;
}