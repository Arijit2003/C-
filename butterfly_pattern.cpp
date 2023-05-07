#include<iostream>
using namespace std;
int main(){
    int n,spaces;
    cout<<"Enter no: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        spaces=2*n-(2*i);
        for(int k=1;k<=spaces;k++){
            cout<<" ";
        }
        for(int l=i;l>=1;l--){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        spaces=2*n-(2*i);
        for(int k=1;k<=spaces;k++){
            cout<<" ";
        }
        for(int l=i;l>=1;l--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
