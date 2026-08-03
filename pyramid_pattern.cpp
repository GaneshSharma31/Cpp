#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){         //space
              cout << " "; 
            }
            for (int k=0;k<2*i+1;k++){    // starts to be printed
                cout << "*";
            }
        
        cout << endl;
    }
    return 0;
} 


/* output :
    *
   ***
  *****
 *******    */