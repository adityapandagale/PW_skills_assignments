#include <iostream>
using namespace std;
bool prime(int n){
    for (int i=2; i<n-1; i++){
        if (n%2==0){
            return false;
        }
        else{
            return true;
        }
    }
}

int main(){
    int a=2;
    int d=10;

    for (int i=a; i<=d; i++){
        if (prime(i)){
            cout<<i<<" ";
        }
        
    }
}