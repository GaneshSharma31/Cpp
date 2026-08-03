#include<iostream>
using namespace std;
int main(){
    int n=4;
    for (int i=0;i<n;i++){           // number of line of pattern
        for (int j=0;j<n-i-1;j++){   // space
            cout << " ";
        }
        for (int j=0;j<2*i+1;j++){   // stars
            cout << "*";
        }
        
        cout << endl;

        
    }
    int k=3;
    for (int i=0;i<n;i++){                   // number of line of pattern
        for (int j=0;j<=i;j++){               // space
            cout << " "; 
        }
        for (int j= 0;j<(2*k-1)-2*i;j++){    // stars
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}



/*output :
   *
  ***
 *****
*******
 *****
  ***
   *
*/