#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter no of rows and column: ";
    cin>>r>>c;
    for(int i=1;i<=r;i++){
        if(i==1 || i==r){
            for(int j=1;j<=c;j++){
                cout<<"*";
            }
            cout<<endl;
        }
        else{
            for(int j=1;j<=c;j++){
                if(j==1 || j==c){
                    cout<<"*";
                }else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
