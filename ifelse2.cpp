/*Write a program to take input from user for Cost Price (C.P.) and Selling Price(S.P.) and
calculate Profit or Loss.

Explanation :
Formula for profit and loss
Profit = S.P - C.P
Loss = C.P - S.P
(S.P is Selling Price and C.P is Cost Price)
Sample Input :
Enter cost price: 4000
Enter selling price: 9560
Sample Output :
Profit = 5560*/

#include <iostream>
using namespace std;
int main(){
    int sp;
    cout<<"enter the value of sp :";
    cin>>sp;
    int cp;
    cout<<"enter the value of cp :";
    cin>>cp;
    int profit = sp-cp;
    int loss= cp-sp;

    if (sp>cp){
        cout<<"profit of : "<<profit;
    }
    else{
        cout<<"loss of : "<<loss;
    }
}