#include <iostream>
using namespace std;
//- Given radius of a circle. Write a function to print the area and circumference of the circle.
float area(float r){
    float ar =3.14*r*r;
    return ar;  
}
float circumferance(float R){
    float cf=2*3.14*R;
    return cf;
}

int main(){
    float r,R;
    cin>>r>>R;
    cout<<"the area of circle is "<<area(r)<<endl;
    cout<<"the circumferance of circle is "<<circumferance(R)<<endl;
}