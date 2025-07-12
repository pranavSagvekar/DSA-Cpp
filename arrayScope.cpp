#include <iostream>
using namespace std;

    void Additon_Of_Element(int arr[] ,int size){
        int sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum += arr[i];
        }
        cout<< "Additon of the array elemet is  :";
        cout << sum;
    }
int main(){

    cout<<"Enter the size of the array : ";
    int size;
    cin>>size;
    int arr[size];

    cout << "Enter the element in the array of the size "<<size<<" :"<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    Additon_Of_Element(arr , size);
    

}