/*Q1 - Write a program which takes the values of length and breadth from user and check if it is
a square or not. (Easy)
Sample Input :
Enter length: 5
Enter breadth: 4
Sample Output : It is a rectangle*/

#include <iostream>
using namespace std;
int main(){
    int length;
    cout<<"enter the value of length : "<<endl;
    cin>>length;
    int breadth;
     cout<<"enter the value of breadth : "<<endl;
     cin>>breadth;

     if (length==breadth){
        cout<<"square ";

     }
     else{
        cout<<"rectangle : ";
     }



}