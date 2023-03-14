#include <iostream>

using namespace std;

int main()
{
    char ch1;
     int num1 = 5, num2= 2;
    float result;


    //Task 1:
    cout << "Please enter your value:" ;
    cin >> ch1;
    cout << " ASC of " << ch1 << " is " << int(ch1) << endl;


    //Task 2:
    result = float(num1) /float (num2) ;
    cout << " the output of division is" << result;


    return 0;
}
