#include<iostream>
using namespace std;

int LinearSearch(int A[] , int key , int n){
    int i;
    for(i=0; i<n; i++){
        if(A[i]==key){
            return i;
        }
    } 
    return -1;
}

int main(){
    int A[] = {5,7,18,15,29,24};
    int result = LinearSearch(A,38,6);
    if(result==-1){
        cout<< "Not found";
    } else{
        cout<< "found at index "<<result;
    }
}