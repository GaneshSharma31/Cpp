#include<iostream>
using namespace std;
int main(){
    int n=4;
    for (int i=0;i<n;i++){                   // number of line of pattern
        for (int j=0;j<i;j++){               // space
            cout << " "; 
        }
        for (int j= 0;j<(2*n-1)-2*i;j++){    // stars
            cout << "*";
        }
        cout << endl;
    }
    return 0;
} 



/* output :
*******
 *****
  ***
   *

*/