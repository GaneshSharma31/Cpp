#include<iostream>
using namespace std;
 
int linearsearch (int size,int arr[],int target){
    for (int i=0;i<size;i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}
int main (){
    int arr[] = {2,3,4,5,6,0,12};
    int size = 7;
    int target = 4;
    cout << linearsearch(size,arr,target) << endl;          //time complexity :o(n) 
    return 0;
}