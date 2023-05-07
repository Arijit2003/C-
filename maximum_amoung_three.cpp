#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter total number of numbers that you want to enter through keyboard: ";
    cin>>n;

    int myArray[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the number"<<i+1<<": ";
        cin>>myArray[i];
    }
    int maxi=myArray[0];
    for(int i=0;i<n;i++){
        if(myArray[i]>maxi){
            maxi=myArray[i];
        }
    }
    cout<<"Maximum number: "<<maxi;
}
