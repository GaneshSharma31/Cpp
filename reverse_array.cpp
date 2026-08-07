#include<iostream>
using namespace std;
void reverse_array (int arr[],int size){
    int start =0 ,end = size -1;
    while (start < end){
        swap (arr[start],arr[end]);
        start ++ ,end--;
    }
}
int main (){
    int arr[]={2,1,4,5,8,9};
    int size= 6;
    reverse_array (arr,size);
    cout << "{";
    for (int i=0;i<size;i++){   
        
        cout <<  arr[i]  ;
        if(i<size-1){
        cout << ",";}

    }
    cout << "}" << endl;
    return 0;
}

 // output : {9,8,5,4,1,2}