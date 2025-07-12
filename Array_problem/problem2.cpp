#include<iostream>
#include<algorithm> // Required for std::swap

using namespace std;

void swapNumberAlternate(int arr[] , int size){ // Corrected function name
    for(int i = 0 ; i < size ; i += 2){ // Corrected increment
        if(i + 1 < size){
            swap(arr[i], arr[i+1]);
        }
    }
}

void printArray(int arr[] , int size){
    for (int i = 0; i < size; i++)
    {
        cout<< arr[i] << " ";
    }
    cout<<endl;
}

int main(){
    int even[8] = {1,2,3,4,5,6,7,8};
    swapNumberAlternate(even , 8);
    printArray(even , 8);

    int odd[5] = {10,20,30,40,50}; // Added an example for odd sized array
    swapNumberAlternate(odd, 5);
    printArray(odd, 5);

    return 0; // It's good practice to return 0 from main
}