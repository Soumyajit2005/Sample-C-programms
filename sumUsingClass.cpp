#include<iostream>
using namespace std;

class object{
    public:
        void sum(int a, int b){
            cout<<"The sum of "<<a<<" and "<<b<<" is "<<a+b<<endl;
        }
};

int main(){
    object o;
    int a, b;
    cout <<"Enter the first number: "<<endl;
    cin>>a;
    cout <<"Enter the second number: "<<endl;
    cin>>b;
    o.sum(a, b);
    return 0;
}