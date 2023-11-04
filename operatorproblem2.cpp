#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"the value of n is : "<<endl;
    cin>>n;
    int m;
    cout<<"the value of m is : "<<endl;
    cin>>m;

    cout<<((n<50) && (n<m)) ? 1:0;
}