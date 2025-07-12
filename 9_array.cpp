#include <iostream>
using namespace std;

void printArray(int arr[] , int size){
    for(int i  = 0 ; i < size ; i++){
        cout<<arr[i]<<endl;

    
    }
    cout << "Printing done !";


}


int main(){
    // int number[3] = {1,2,3};

    // cout<<"Value at 0 :" << number[0] <<endl;
    // cout<<"Value at 20 :" << number[20] <<endl;

    // int third[15] = {1,2};
    // for(int i  = 0 ; i < 5 ; i++){
    //     cout<<third[i]<<endl;

    
    // }

    // int all[5];
    // fill_n(all , 5 , 4);

    // for(int i : all){
    //     cout << i << endl;
    // }

    // int a1[3] = { 1 , 3 , 5};
    // int size = 3;
    // printArray(a1 , size);

    char ch[2] ={'a','b','c'};

    for(char i : ch){
        cout<< i << " "; 
    }

}