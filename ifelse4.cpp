#include <iostream>
using namespace std;
int main(){
    //Create a calculator using switch statement to perform addition, subtraction, multiplication and division.

    int num1;
    cout<<"enter the value of num 1 : ";
    cin>>num1;
    int num2;
    cout<<"enter the value of num 1 : ";
    cin>>num2;
    char op;

    cout<<" operators +,-,/,* :";
    cin>>op;

    switch(op){
    case '+':
    cout << num1 << " + " << num2 << " = " << num1 + num2;
    break;
    case '-':
    cout << num1 << " - " << num2 << " = " << num1 - num2;
    break;
    case '*':
    cout << num1 << " * " << num2 << " = " << num1 * num2;
    break;
    case '/':
    cout << num1 << " / " << num2 << " = " << num1 / num2;
    break;
    default:
    cout << "Error! The operator is not correct";
    break;
    }

}