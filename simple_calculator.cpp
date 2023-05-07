#include<iostream>
using namespace std;
int main(){
    int m,n;
    char operators;
    cout<<"Enter any two numbers: ";
    cin>>m>>n;
    cout<<"Enter any operations(+,-,*,/): ";
    cin>>operators;
    switch(operators){
        case '+':{
            cout<<"Sum: "<<m+n<<endl;
            break;
        }
        case '-':{
            cout<<"Subtraction: "<<m-n<<endl;
            break;
        }
        case '*':{
            cout<<"Muliplication: "<<m*n<<endl;
            break;
        }
        case '/':{
            cout<<"Division: "<<m/n<<endl;
            break;
        }
        default:{
            cout<<"Sorry! I can do only basic sum,sub,mul,div\n";
            break;
        }
    }
    return 0;
}
