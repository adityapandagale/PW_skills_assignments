#include <iostream>
using namespace std;
int main(){
        // Q6. Write a program to calculate marks to grades . Follow the conversion rule as given below :
    int marks;
    cout<<"enter the marks ";
    cin>>marks;

    if (marks >=90 && marks<100){
        cout<<"gr a"<<endl;

    }
    else if (marks >=80 && marks<90){
        cout<<"gr b"<<endl;
}
    else if (marks >=70 && marks<80){
        cout<<'gr c'<<endl;
}
    else if (marks >=60 && marks<70){
        cout<<'gr d'<<endl;
}
    else if (marks >=50 && marks<60){
        cout<<'gr e'<<endl;
}
    else if (marks >40 && marks<50){
        cout<<'gr f'<<endl;
    }
    else{
        cout<<"you are failed at exam :";
    }
}
