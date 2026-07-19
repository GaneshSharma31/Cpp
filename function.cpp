#include<iostream>
using namespace std;

int factorial(int n){
   int fact = 1;
    for (int i=1; i<=n ; i++ ){
        fact *= i;
    }
return fact;
}
int sum( int n){
    int s=0;
    for (int i=1;i<=n ;i++){
        s +=i;
    }
    return s;
}
int main (){
    int n1,n2;
    cout <<"enter n1 to find the factorial of a number";
    cin >> n1;
    cout << "enter n2 to find the sum of a number";
    cin >> n2;
    int factorialresult = factorial (n1);
    int sumresult = sum (n2);
    cout << factorialresult << endl;
    cout << sumresult << endl;
    return 0 ;
}
