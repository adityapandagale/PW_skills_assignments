// Q3 - Write a C++ program to take length and breadth of a rectangle and print its area. (Easy)
// Sample Input : 7, 4
// Sample Output : 28
#include <iostream>

using namespace std;

int main()
{
    int length;
    cin>>length;
    
    int breadth;
    cin>>breadth;
    
    cout<<"the area of rectangle is "<<endl;
    int area = length*breadth;
    cout<<area;
    

    return 0;
}