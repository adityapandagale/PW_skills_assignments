#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int first;
    int second;
    int third;

    first =n/100;
    n=n%100;
    second=n/10;
    third=n%10;

    int sum=first+second+third;
    cout<<sum;


}