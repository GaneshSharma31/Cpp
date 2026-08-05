#include<iostream>
using namespace std;


int dectobin(int dec){
    int ans=0,multiple=1;
    while( dec>0){
    int rem = dec%2;
    dec = dec/2;
    ans = ans +rem * multiple;
    multiple *=10;}
    return ans;
}
int main (){
    int dec;
    cout << "enter decimal number to convert it into binary :";
    cin >> dec;
    int num = dectobin(dec);
    cout<< "solutiom is " << num << endl;
    return 0;
}