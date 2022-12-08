#include <iostream>
using namespace std;

class employee
{
private:
    string eName;  // name of an employee
    float eSalary; // salary of an employee
    int eAge;      // age of an employee
    int calcYearlySalary(int salary)
    {
        int yearlySalary = ((salary * 12) + ((salary * 12 * 15) / 100));
        return yearlySalary;
    }; // Method to calculate yearly salary of an employee

public:
    void setEmpData()
    {
        cout << "Enetr your name: " << endl;
        getline(cin, eName);
        cout << "Enetr your monthly salary: " << endl;
        cin >> eSalary;
        cout << "Enetr your age: " << endl;
        cin >> eAge;
    };
    void displayImpData()
    {
        cout << "Your name is " << eName << ".you are " << eAge << " years old."
             << " And your Yearly salary is " << calcYearlySalary(eSalary) << endl;
    };
};

int main()
{
    employee employee1;
    employee1.setEmpData();
    employee1.displayImpData();
    return 0;
}