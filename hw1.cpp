#include <iostream>
using namespace std;
int main (){
    int n,sum =0;
    cout << "sum of number from 1 to n  that are divisible by 3 :";
    cin>> n;
    for (int i=1 ; i<= n ; i++){
      if (  i % 3 ==0){
        sum += i;

      }

       
    }cout << "sum = " << sum  << endl; 
   
    return 0;

 }
     