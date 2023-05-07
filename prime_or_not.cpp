#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter any number's range: ";
    cin>>a>>b;
    for(int j=a;j<=b;j++){
        int i;
        for(i=j-1;i>1;i--){
            if(j%i==0){
                cout<<j<<" non prime number"<<endl;
                break;
            }
        }
        if(i==1)
            cout<<j<<" prime number"<<endl;
    }

    return 0;
}
