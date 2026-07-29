#include<iostream>
using namespace std;

int factorial ( int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact *=i;
    }
    return fact;
}
int ncr(int n, int r){
int fact_n = factorial(n);
int fact_r = factorial(r);
int fact_nmr = factorial ( n-r);
return fact_n/(fact_nmr*fact_r);
}
 int main (){
    int n ,r;
    cout<< "enter n to find ncr : ";
    cin >> n;
    cout<< "enter r to find ncr : ";
    cin >>r;
    if ( n>0 && r>0 &&n>r){
cout << "ncr of n and r =" << " " << ncr(n,r) <<endl;
return 0;} else { 
    cout << "invalid input!" << endl;
    return 0;
}
 }
    
  