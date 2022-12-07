// Write a C++ code using For Loop to display the ff:
// a. Enter your school name:USLS
// USLS USLS USLS USLS USLS USLS............................USLS
// Note:Display the name 100x
// b. Asks the user to enter five numbers and display the sum and average using For Loop
// Enter number 1:
// Enter number 2:
// Enter number 3:
// Enter number 4:
// Enter number 5:
// The sum is:_____
// The average is:_______

#include<iostream>
using namespace std;

int main(){
    string schoolNAme;
    cout<<"Enter your school name: "<<endl;
    cin>>schoolNAme;
    for(int i =0;i<100;i++){
        cout<<schoolNAme<<" "<<flush;
    }
    cout<<endl;
    float num;
    float sum =0;
    for(int i =1;i<=5;i++){
        cout<<"Enter number "<<i<<": "<<flush;
        cin>>num;
        sum = sum+num;
    }
    cout<<"The sum is: "<<sum<<endl;
    cout<<"The average is: "<<sum/5<<endl;
    return 0;
}