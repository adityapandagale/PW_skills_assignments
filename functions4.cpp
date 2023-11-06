#include <iostream>
using namespace std;
//Given two numbers a and b, write a program using functions to print all the odd numbers
//between them.
bool odd(int num){
    if (num%2==0){
        return false;
    }
    return true;
}
int main(){
    int a;
    cin>>a;

    for (int i=1; i<=a; i++){
        if (odd(i)){
        cout<<i<<" ";
    }
}
}