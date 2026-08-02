#include<iostream>
using namespace std;
int main(){
    int n=4,k=1;
    for(int i=0;i<n;i++){
        
        for(int j=1;j<=i+1;j++){  // Should the number restart every row? → Use j.
// Should the number continue across all rows? → Use a separate variable like k.
        
            cout << k<< " ";
            k++;
        }
        cout<< endl;
    }
    return 0;
}  




// output :    
/*  1 
    2 3 
    4 5 6 
    7 8 9 10    */