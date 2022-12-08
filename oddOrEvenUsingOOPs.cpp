#include <iostream>
using namespace std;

class object
{
private:
    int number;

public:
    void oddOrEven(int n)
    {
        if (n % 2 == 0)
        {
            cout << n << " is even" << endl;
        }
        else
        {
            cout << n << " is odd" << endl;
        }
    }
};

int main()
{
    object o;
    int number;
    cout << "Enter a number" << endl;
    cin >> number;
    o.oddOrEven(number);

    return 0;
}