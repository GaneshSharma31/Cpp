#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0;i<n;i++){ // tells how much line of code will print
        for(int j=0;j<n-i-1;j++ )  {//  prints space = n-i-1   
       cout <<" "; }            
       
       for(int j=0;j<i+1;j++) { //  prints the pattern  
           cout << "*";
    }
            
    cout <<endl;
    }
    return 0;
}       



/* this code will print this pattern   *
                                      **
                                     ***
                                    ****           */