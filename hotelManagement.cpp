#include <iostream>
using namespace std;

class hotel{
    private:
        int customerID; //ID of customer who has checked in;
        char customerName[1000]; //Name of customer(char array)
        int roomNo; //Room number where customer has checked in
        float tariff = 5000; // Basic room charge per day in rupees
        int days; // The number of days the room was booked for
        int calcTotalAmount(float tariff,int days){
                return tariff*days;
        }; //Method to calculate total amount to be paid

    public:
        void setCustomerData(){  // function to input the data values of (a) and (b)
            cout<<"Enter your name: "<< endl;
            cin.get(customerName,1000);
            cout<<"Enter your Id: "<< endl;
            cin>> customerID;
        }
        void setHotelData(){  // function to input the data values of (c) to (e)
            cout<<"Enter your room no: "<< endl;
            cin>> roomNo;
            cout<<"Enter The number of days the room was booked for: "<<endl;
            cin>>days;
        }
        void printBillData(){
            cout<<"Your customer ID is: "<< customerID<<endl;
            cout<<"Your name is: "<< customerName <<endl;
            cout<<"Your room number is: "<< roomNo<<endl;
            cout<<"The room was booked for "<<days<<" days"<<endl;
            cout<<"The basic room charge per day is "<<tariff<<" rupees"<<endl;
            cout<<"The total amount you have to pay is: "<<calcTotalAmount(tariff,days)<<endl;
        }
};

int main(){
    hotel xyz;
    xyz.setCustomerData();
    xyz.setHotelData();
    xyz.printBillData();
    return 0;
}