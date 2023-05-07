#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter any character: ";
    cin>>ch;
    switch(ch){
        case 'a': cout<<"Vowel"<<endl;break;
        case 'e': cout<<"Vowel"<<endl;break;
        case 'i': cout<<"Vowel"<<endl;break;
        case 'o': cout<<"Vowel"<<endl;break;
        case 'u': cout<<"Vowel"<<endl;break;
        default: cout<<"Consonant"<<endl;break;
    }
    cout<<(1<<31);
    return 0;
}
