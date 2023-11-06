//Write a function to print squares of the first 5 natural numbers.
#include <iostream>
using namespace std;
int num(int n){
    int num=n*n;
    return num;
}
int main(){
    int a;
    cout<<"a :";
    cin>>a;
    for (int i=1; i<=a; i++){
        cout<<num(i)<<" ";
    }
}