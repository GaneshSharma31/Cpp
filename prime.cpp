#include<iostream>
using namespace std;
int main () {
int n ;
cout<< " enter a number\n";
cin >> n;
int i = 2;
while (i < n){
    if (n % i == 0) {
    cout << " not prime\n";

    break;
    i++;
    
      }  else if(  i ==n)  {
        cout << " prime\n";
        break;
      }


    }
        return 0;

}



//  logic : n% i in which 2 se leke n-1 tuk include ha then print not prime else prime;
// break key word application.
