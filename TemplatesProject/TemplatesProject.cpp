// Eashan Vytla
// CIS 1202 101
// July 31, 2021

#include <iostream>

using namespace std;

template <class T> T half(T input);

int main()
{
    //initializing driver test variables
    double a = 7.0;
    float b = 5.0f;
    int c = 3;

    //Outputting the results of the half() function on the different variables
    cout << half(a) << endl;
    cout << half(b) << endl;
    cout << half(c) << endl;
}

template <class T> T half(T input)
{
    //Casting the input value to a double and dividing by 2
    double val = static_cast<double>(input) / 2;

    //Checking if the parameter is an integer
    if (typeid(T) == typeid(int)) {
        //If the parameter is an integer, then round the value
        return round(val);
    }
    else {
        //if the parameter is a float or double, then return the value
        return val;
    }
}
