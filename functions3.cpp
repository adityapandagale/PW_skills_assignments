#include <iostream>
using namespace std;
//Given the age of a person, write a function to check if the person is eligible to vote or not.
int aditya(int person){
    return person;
}
int main(){
    int a;
    cin>>a;
    if (a>=18){
        cout<<"you are able to vote "<<endl;
    }
    else if(a<18){
        cout<<"you are not eligible to vote"<<endl;
    }
    else{
        cout<<"you are not yet bor "<<endl;
    }
}