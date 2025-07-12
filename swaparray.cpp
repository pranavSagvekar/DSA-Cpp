#include <iostream>
using namespace std;

void reverse(int arr[] , int num){
    int start = 0 ; 
    int end = num-1;
    while(start <= end){
        swap(arr[start] , arr[end]);
        start ++ ;
        end--;
    }
}

void printA(int arr[] , int size){
    for(int i = 0 ; i < size ; i++){
        cout << arr[i] << " ";
    }
    cout<<endl;
}

int main(){
    int ar1[5]= { 1 , 3  , 5 ,3 ,2};
    int ar2[6] = {34,45,34,2,5,6};

    reverse(ar1 , 5);
    reverse(ar2 , 6);
    printA(ar1 , 5);
    printA(ar2 , 6);



}