#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int first;
    int sec;
    int three;
    int four;
    int five;

    first = n/10000; // 1
    n=n%10000;//        2345
    sec = n/1000;  //   2
    n=n%1000; //        345
    three = n/100;//    3
    n=n%100;    //      45
    four = n/10;//      5
   
    five = n%10;

    cout<<first+four<<endl;
    


    
}