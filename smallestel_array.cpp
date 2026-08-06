#include<iostream>
#include<climits>
using namespace std;
int main (){
    int arr[5]= {1,2,3,4,-1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int smallest= INT_MAX;
    for (int i=0;i<size;i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }
    cout << "smallest = " << smallest << endl;
    return 0;
}